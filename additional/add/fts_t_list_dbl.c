/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_t_list_dbl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:44:14 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/12/13 22:13:45 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief Devuelve el tamaño de una lista doblemente enlazada.
 * 
 * Esta función devuelve el tamaño de una lista doblemente enlazada.
 * 
 * @param lst puntero a algun nodo de la lista.
 * @return El tamaño de la lista.
 */
int	ft_list_dbl_size(t_list_dbl *lst)
{
	int			size;
	t_list_dbl	*tmp;

	size = 0;
	tmp = ft_list_dbl_get_first(lst);
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}

/**
 * @brief Devuelve el último nodo de una lista doblemente enlazada.
 * 
 * Esta función devuelve el último nodo de una lista doblemente enlazada.
 * 
 * @param lst Puntero al primer nodo de la lista.
 * @return Un puntero al último nodo de la lista.
 */
t_list_dbl	*ft_list_dbl_get_last(t_list_dbl *lst)
{
	t_list_dbl	*tmp;

	tmp = lst;
	while (tmp && tmp->next)
		tmp = tmp->next;
	return (tmp);
}

/**
 * @brief Devuelve el primer nodo de una lista doblemente enlazada.
 * 
 * Esta función devuelve el primer nodo de una lista doblemente enlazada.
 * 
 * @param lst Puntero a algún nodo de la lista.
 * @return Un puntero al primer nodo de la lista.
 */
t_list_dbl	*ft_list_dbl_get_first(t_list_dbl *lst)
{
	t_list_dbl	*tmp;

	tmp = lst;
	while (tmp && tmp->prev)
		tmp = tmp->prev;
	return (tmp);
}

/**
 * @brief Devuelve un entero con la posición de un nodo en la lista.
 * 
 * Esta función devuelve un entero con la posición de un nodo en la lista.
 * 
 * @param lst Puntero a algún nodo de la lista.
 * @return La posición del nodo en la lista.
 */
int	ft_list_dbl_get_position_node(t_list_dbl *node)
{
	int	pos;

	pos = 1;
	while (node->prev)
	{
		node = node->prev;
		pos++;
	}
	return (pos);
}
