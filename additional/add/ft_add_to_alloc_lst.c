/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_alloc_lst.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:44:16 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/15 21:00:59 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief Añade un puntero al contenido en un nuevo nodo de la lista enlazada
 * `alloc_lst`.
 * @example ft_add_to_alloc_lst(malloc(10));
 * 
 * @param content Puntero al contenido a añadir.
 * @return void* Puntero al contenido añadido.
 * @note En caso de error, libera la memoria de la lista y retorna `NULL`.
 * @note La lista enlazada `alloc_lst` se crea si no existe.
 */
void	*ft_add_to_alloc_lst(void *content)
{
	t_list	*alloc_lst;

	alloc_lst = ft_alloc_lst(0, 5);
	if (!content)
		ft_alloc_lst(0, 0);
	ft_lstadd_back(&alloc_lst, ft_lstnew(content));
	return (content);
}

/**
 * @brief Añade un puntero al contenido en un nuevo nodo de la lista enlazada
 * `alloc_lst`.
 * @example ft_add_to_alloc_lst_e(malloc(10));
 * 
 * @param content Puntero al contenido a añadir.
 * @return void* Puntero al contenido añadido.
 * @note En caso de error, libera la memoria de la lista, muestra un mensaje de
 * error y finaliza el programa.
 * @note La lista enlazada `alloc_lst` se crea si no existe.
 */
void	*ft_add_to_alloc_lst_e(void *content)
{
	t_list	*alloc_lst;

	alloc_lst = ft_alloc_lst(0, 5);
	if (!content)
	{
		ft_alloc_lst(0, 0);
		ft_putstr_fd("\e[31mError\n\e[33mMalloc failed\n\e[0m", 2);
		exit(1);
	}
	ft_lstadd_back(&alloc_lst, ft_lstnew(content));
	return (content);
}
