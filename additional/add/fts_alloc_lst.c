/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_alloc_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:11:58 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/23 16:45:14 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief Reserva memoria y añade el puntero al contenido en un nuevo nodo de
 * la lista enlazada `lst`. En caso de error, libera la memoria de la lista.
 *
 * @param lst Puntero al primer nodo de la lista.
 * @param size Tamaño de la memoria a reservar.
 * @return void* Puntero con la memoria reservada o NULL en caso de error.
 */
void	*ft_malloc_lst(t_list **lst, size_t size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
	{
		ft_alloc_clear();
		return (0);
	}
	new->content = malloc(size);
	if (!new->content)
	{
		free(new);
		ft_alloc_clear();
		return (0);
	}
	new->next = 0;
	ft_lstadd_back(lst, new);
	return (new->content);
}

/**
* @brief Reserva memoria con calloc y añade el puntero al contenido en un nuevo
* nodo de la lista enlazada `lst`. En caso de error, libera la memoria de la
* lista.
*
* @param lst Puntero al primer nodo de la lista.
* @param size Tamaño de la memoria a reservar.
* @return void* Puntero con la memoria reservada o NULL en caso de error.
*/
void	*ft_calloc_lst(t_list **lst, size_t size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
	{
		ft_alloc_clear();
		return (0);
	}
	new->content = ft_calloc(1, size);
	if (!new->content)
	{
		free(new);
		ft_alloc_clear();
		return (0);
	}
	new->next = 0;
	ft_lstadd_back(lst, new);
	return (new->content);
}

/**
 * @brief Reserva memoria y añade el puntero al contenido en un nuevo nodo de
 * la lista enlazada `lst`. En caso de error, libera la memoria de la lista,
 * muestra un mensaje de error y finaliza el programa.
 * 
 * @param lst Puntero al primer nodo de la lista.
 * @param size Tamaño de la memoria a reservar.
 * @return void* Puntero con la memoria reservada.
 */
void	*ft_malloc_lst_e(t_list **lst, size_t size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
	{
		ft_alloc_clear();
		ft_putstr_fd("\e[31mError\n\e[33mMalloc failed\n\e[0m", 2);
		exit(1);
	}
	new->content = malloc(size);
	if (!new->content)
	{
		free(new);
		ft_alloc_clear();
		ft_putstr_fd("\e[31mError\n\e[33mMalloc failed\n\e[0m", 2);
		exit(1);
	}
	new->next = 0;
	ft_lstadd_back(lst, new);
	return (new->content);
}

/**
 * @brief Reserva memoria con calloc y añade el puntero al contenido en un nuevo
 * nodo de la lista enlazada `lst`. En caso de error, libera la memoria de la
 * lista, muestra un mensaje de error y finaliza el programa.
 * 
 * @param lst Puntero al primer nodo de la lista.
 * @param size Tamaño de la memoria a reservar.
 * @return void* Puntero con la memoria reservada.
 */
void	*ft_calloc_lst_e(t_list **lst, size_t size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
	{
		ft_alloc_clear();
		ft_putstr_fd("\e[31mError\n\e[33mMalloc failed\n\e[0m", 2);
		exit(1);
	}
	new->content = ft_calloc(1, size);
	if (!new->content)
	{
		free(new);
		ft_alloc_clear();
		ft_putstr_fd("\e[31mError\n\e[33mMalloc failed\n\e[0m", 2);
		exit(1);
	}
	new->next = 0;
	ft_lstadd_back(lst, new);
	return (new->content);
}

/**
* @brief Reserva memoria y añade el puntero al contenido en un nuevo nodo de
* la lista enlazada estatica `lst`. En caso de error, libera la memoria de la
* lista.
* 
* @param size Tamaño de la memoria a reservar.
* @param n_func Número de la función a ejecutar.
* `<= 0:` Libera la memoria de la lista.
* `1:` Reserva memoria con malloc.
* `2:` Reserva memoria con calloc.
* `3:` Reserva memoria con malloc y finaliza el programa en caso de error.
* `4:` Reserva memoria con calloc y finaliza el programa en caso de error.
* `>= 5:` Devuelve la lista.
* @return `void*` Puntero con la memoria reservada, NULL en caso de error o
* `n_func` no válido o la lista en caso de `n_func` no válido.
*/
void	*ft_alloc_lst(size_t size, int n_func)
{
	t_list	*lst;

	lst = ft_get_alloc_lst(1);
	if (n_func <= 0)
	{
		ft_lstclear(&lst, free);
		return (0);
	}
	if (n_func == 1)
		return (ft_malloc_lst(&lst, size));
	if (n_func == 2)
		return (ft_calloc_lst(&lst, size));
	if (n_func == 3)
		return (ft_malloc_lst_e(&lst, size));
	if (n_func == 4)
		return (ft_calloc_lst_e(&lst, size));
	if (lst)
		return (lst);
	return (0);
}
