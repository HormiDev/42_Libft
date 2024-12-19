/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 23:23:25 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/12/19 23:33:53 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_alloc.h"

/**
 * @brief Reserva memoria con 'ft_alloc' y añade el puntero al contenido en un
 * nuevo nodo de la lista enlazada `lst`. en caso de error, libera la memoria
 * 
 * @param content Contenido del nodo.
 * @return t_list* Puntero al nuevo nodo.
 */
t_list	*ft_lstnew_a(void *content)
{
	t_list	*node;

	node = ft_alloc_lst(sizeof(t_list), 1);
	if (node == 0)
		return (0);
	node -> content = content;
	node -> next = NULL;
	return (node);
}

/**
 * @brief Reserva memoria con 'ft_alloc' y añade el puntero al contenido en un
 * nuevo nodo de la lista enlazada `lst`. en caso de error, libera la memoria
 * y cierra el programa.
 * 
 * @param content Contenido del nodo.
 * @return t_list* Puntero al nuevo nodo.
 */
t_list	*ft_lstnew_ae(void *content)
{
	t_list	*node;

	node = ft_alloc_lst(sizeof(t_list), 3);
	if (node == 0)
		return (0);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
