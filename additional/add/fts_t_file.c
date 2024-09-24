/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_t_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 02:16:14 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/24 10:01:03 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief Crea una estructura que contiene un fichero linea a linea en 
 * forma de lista a partir del contenido de un archivo dado.
 *
 * Esta función abre un archivo en modo de solo lectura, lee su contenido 
 * línea por línea
 * y almacena cada línea en una lista de archivos. La lista de archivos se 
 * representa
 * mediante una estructura `t_file`.
 *
 * @param filename El nombre del archivo que se va a leer.
 * @return Un puntero a una estructura `t_file` que contiene el contenido 
 * del archivo.
 *         Si ocurre un error al abrir el archivo o al asignar memoria, 
 * devuelve NULL.
 */
t_file	*ft_create_file_from_filename(char *filename)
{
	t_file	*file;
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	file = ft_create_file_from_fd(fd);
	close(fd);
	return (file);
}

/**
 * @brief Crea una estructura que contiene un fichero linea a linea en forma 
 * de lista a partir del contenido de un archivo dado.
 *
 * Esta función abre un archivo en modo de solo lectura, lee su contenido 
 * línea por línea
 * y almacena cada línea en una lista de archivos. La lista de archivos se 
 * representa
 * mediante una estructura `t_file`.
 *
 * @param fd El descriptor de archivo del archivo que se va a leer.
 * @return Un puntero a una estructura `t_file` que contiene el contenido 
 * del archivo.
 *         Si ocurre un error al abrir el archivo o al asignar memoria, devuelve 
 * NULL.
 */
t_file	*ft_create_file_from_fd(int fd)
{
	t_file	*file;
	char		*line;
	int			cont;

	file = malloc(sizeof(t_file));
	if (!file)
		return (0);
	file->list_content = 0;
	line = get_next_line(fd);
	cont = 0;
	while (line)
	{
		file->list_content = ft_strlist_add_new
			(file->list_content, line);
		cont++;
		line = get_next_line(fd);
	}
	file->lines = cont;
	file->array_content = ft_strlist_to_array(file->list_content);
	if (!file->array_content)
	{
		ft_file_clear(&file);
		return (0);
	}
	return (file);
}

/**
 * @brief Libera toda la memoria asociada con una lista de archivos.
 *
 * Esta función libera toda la memoria asociada con un `t_file`
 * y establece el puntero de la `t_file` a NULL.
 *
 * @param lst Doble puntero a la lista de archivos (t_file) que se va a 
 * limpiar.
 *
 * La función recorre la lista, libera la memoria de cada cadena y de cada nodo,
 * y finalmente establece el puntero de la lista a NULL para evitar accesos 
 * posteriores a memoria liberada.
 */
void	ft_file_clear(t_file **lst)
{
	if (!lst || !*lst)
		return ;
	ft_strlist_clear(&(*lst)->list_content);
	free((*lst)->array_content);
	free(*lst);
	*lst = 0;
}

/**
 * @brief Imprime todos los elementos de una lista enlazada de archivos.
 *
 * Esta función recorre una lista enlazada de tipo t_file e imprime
 * cada cadena contenida en los nodos de la lista.
 *
 * @param file Puntero al primer nodo de la lista enlazada de archivos.
 */
void	ft_file_print(t_file *file)
{
	if (!file)
		return ;
	ft_strlist_print(file->list_content);
}
