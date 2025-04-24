/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_alloc_fd_lst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:06:26 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/24 19:45:31 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief Abre un fichero y añade el puntero al contenido en un nuevo nodo de
 * la lista enlazada `lst`. En caso de error al abrir el fd o allocar la
 * memoria, libera la memoria de la lista y cierra los ficheros abiertos y
 * retornando -1.
 *
 * @param lst Puntero al primer nodo de la lista.
 * @param path Ruta del fichero a abrir.
 * @param flags Flags para abrir el fichero.
 * @return int Descriptor del fichero abierto o -1 en caso de error.
 */
int	ft_open_fd_lst_a(t_list **lst, char *path, int flags, ...)
{
	int				*fd;
	va_list			args;

	va_start(args, flags);
	fd = ft_alloc_lst(sizeof(int), 1);
	if (!fd)
	{
		ft_alloc_clear();
		return (-1);
	}
	*fd = open(path, flags, va_arg(args, int));
	if (*fd == -1)
	{
		ft_alloc_clear();
		return (-1);
	}
	ft_lstadd_back(lst, ft_lstnew_ae(fd));
	return (*fd);
}

/**
 * @brief Abre un fichero y añade el puntero al contenido en un nuevo nodo de
 * la lista enlazada `lst`. En caso de error al abrir el fd o allocar la
 * memoria, libera la memoria de la lista y cierra los ficheros abiertos y
 * finaliza el programa.
 *
 * @param lst Puntero al primer nodo de la lista.
 * @param path Ruta del fichero a abrir.
 * @param flags Flags para abrir el fichero.
 * @return int Descriptor del fichero abierto o -1 en caso de error.
 */
int	ft_open_fd_lst_ae(t_list **lst, char *path, int flags, ...)
{
	int				*fd;
	va_list			args;

	va_start(args, flags);
	fd = ft_alloc_lst(sizeof(int), 3);
	*fd = open(path, flags, va_arg(args, int));
	if (*fd == -1)
	{
		ft_exit_functions();
		ft_dprintf(2, "\e[31mError\n\e[33m%s: Fail to open file\n\e[0m", path);
		ft_alloc_clear();
		exit(EXIT_FAILURE);
	}
	ft_lstadd_back(lst, ft_lstnew_ae(fd));
	return (*fd);
}

/**
 * @brief Abre un fichero y añade el puntero al contenido en un nuevo nodo de
 * la lista enlazada `lst`. En caso de error al allocar la memoria, libera la
 * memoria de la lista y cierra los ficheros abiertos y retorna -1. En caso
 * de error al abrir el fd, simplemente retorna -1.
 *
 * @param lst Puntero al primer nodo de la lista.
 * @param path Ruta del fichero a abrir.
 * @param flags Flags para abrir el fichero.
 * @return int Descriptor del fichero abierto o -1 en caso de error.
 */
int	ft_open_fd_lst_i(t_list **lst, char *path, int flags, ...)
{
	int				*fd;
	va_list			args;

	va_start(args, flags);
	fd = ft_alloc_lst(sizeof(int), 1);
	if (!fd)
	{
		ft_alloc_clear();
		return (-1);
	}
	*fd = open(path, flags, va_arg(args, int));
	if (*fd == -1)
		return (-1);
	ft_lstadd_back(lst, ft_lstnew_ae(fd));
	return (*fd);
}

/**
 * @brief Abre un fichero y añade el puntero al contenido en un nuevo nodo de
 * la lista enlazada `lst`. En caso de error al allocar la memoria, libera la
 * memoria de la lista y cierra los ficheros abiertos y finaliza el programa.
 * En caso de error al abrir el fd, simplemente retorna -1.
 *
 * @param lst Puntero al primer nodo de la lista.
 * @param path Ruta del fichero a abrir.
 * @param flags Flags para abrir el fichero.
 * @return int Descriptor del fichero abierto o -1 en caso de error.
 */
int	ft_open_fd_lst_ie(t_list **lst, char *path, int flags, ...)
{
	int				*fd;
	va_list			args;

	va_start(args, flags);
	fd = ft_alloc_lst(sizeof(int), 3);
	*fd = open(path, flags, va_arg(args, int));
	if (*fd == -1)
		return (-1);
	ft_lstadd_back(lst, ft_lstnew_ae(fd));
	return (*fd);
}

/**
 * @brief Abre un fichero y añade el puntero al contenido en un nuevo nodo de
 * una lista enlazada estatica `lst`. en caso de error al allocar la memoria,
 * libera la memoria de la lista y cierra los ficheros abiertos y finaliza el
 * programa o retorna -1 dependiendo del valor de `n_func`.
 *
 * @param n_func Número de función a ejecutar.
 * `<= 0:` cierra todos los ficheros abiertos.
 * `1:` Retorna -1 si falla open (sin liberar los recursos).
 * `2:` Retorna -1 si falla open (sin liberar los recursos) y finaliza el
 * programa si falla malloc.
 * `3:` Retorna -1 si falla open (liberando los recursos)
 * `4:` Finaliza el programa si fallan open o malloc (libera los recursos).
 * 
 * @param path Ruta del fichero a abrir.
 * @param flags Flags para abrir el fichero.
 * @return int Descriptor del fichero abierto o -1 en caso de error.
 */
int	ft_open_fd_lst(int n_func, char *path, int flags, ...)
{
	t_list	**lst;
	va_list	args;

	lst = ft_get_alloc_lst(2);
	va_start(args, flags);
	if (n_func == 0)
	{
		ft_close_dirs(*lst);
		return (0);
	}
	if (n_func == 1)
		return (ft_open_fd_lst_i(lst, path, flags, args));
	if (n_func == 2)
		return (ft_open_fd_lst_ie(lst, path, flags, args));
	if (n_func == 3)
		return (ft_open_fd_lst_a(lst, path, flags, args));
	if (n_func == 4)
		return (ft_open_fd_lst_ae(lst, path, flags, args));
	return (-1);
}
