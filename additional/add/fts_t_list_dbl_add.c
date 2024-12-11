/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_t_list_dbl_add.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:22:41 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/12/11 14:51:51 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief Añade un nuevo nodo al principio de una lista doblemente enlazada.
 * 
 * Esta función añade un nuevo nodo al principio de una lista doblemente
 * enlazada. en caso de que la lista esté vacía, el nuevo nodo se convierte
 * en el primer nodo de la lista.
 * 
 * @param lst Doble puntero al primer nodo de la lista.
 * @param new Puntero al nuevo nodo que se va a añadir.
 */
void	ft_list_dbl_add_front(t_list_dbl **lst, t_list_dbl *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	(*lst)->prev = new;
	*lst = new;
}

/**
 * @brief Añade un nuevo nodo al final de una lista doblemente enlazada.
 * 
 * Esta función añade un nuevo nodo al final de una lista doblemente
 * enlazada. en caso de que la lista esté vacía, el nuevo nodo se convierte
 * en el primer nodo de la lista.
 * 
 * @param lst Doble puntero al primer nodo de la lista.
 * @param new Puntero al nuevo nodo que se va a añadir.
 */
void	ft_list_dbl_add_back(t_list_dbl **lst, t_list_dbl *new)
{
	t_list_dbl	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
	new->prev = last;
}

/**
 * @brief Añade un nuevo nodo a la lista doblemente enlazada  
 * entre un nodo dado y el siguiente nodo.
 * 
 * Esta función añade un nuevo nodo a la lista doblemente enlazada 
 * entre un nodo dado y el siguiente nodo. Si el nodo dado es NULL, la función
 * no hace nada.
 * 
 * @param lst Puntero al nodo después del cual se va a añadir el nuevo nodo.
 * @param new Puntero al nuevo nodo que se va a añadir.
 */
void	ft_list_dbl_add_next(t_list_dbl *lst, t_list_dbl *new)
{
	if (!lst || !new)
		return ;
	new->next = lst->next;
	new->prev = lst;
	if (lst->next)
		lst->next->prev = new;
	lst->next = new;
}

/**
 * @brief Añade un nuevo nodo a la lista doblemente enlazada  
 * entre un nodo dado y el nodo anterior.
 * 
 * Esta función añade un nuevo nodo a la lista doblemente enlazada 
 * entre un nodo dado y el nodo anterior. Si el nodo dado es NULL, la función
 * no hace nada.
 * 
 * @param lst Puntero al nodo antes del cual se va a añadir el nuevo nodo.
 * @param new Puntero al nuevo nodo que se va a añadir.
 */
void	ft_list_dbl_add_prev(t_list_dbl *lst, t_list_dbl *new)
{
	if (!lst || !new)
		return ;
	new->prev = lst->prev;
	new->next = lst;
	if (lst->prev)
		lst->prev->next = new;
	lst->prev = new;
}
