/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_alloc_lst_clear.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:27:47 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/03/10 16:06:17 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief funcion que libera una lista que haya sido allocada con ft_alloc_lst
 * funcion que libera una lista que haya sido allocada con ft_alloc_lst
 * 
 * @param `lst` - lista a liberar
 */
void	ft_free_alloc_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != 0 && del != 0)
	{
		del(lst->content);
		ft_free_alloc(lst);
	}
}

/**
 * @brief funcion que libera una lista que haya sido allocada con ft_alloc_lst
 * funcion que libera una lista que haya sido allocada con ft_alloc_lst
 * y su contenido con la funcion pasada como parametro
 * 
 * @param `lst` - lista a liberar
 * @param `del` - funcion que libera el contenido de la lista
 */
void	ft_free_alloc_lst_clear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*point;

	if (lst != 0 && del != 0)
	{
		point = lst[0];
		while (point != 0)
		{
			next = point->next;
			ft_free_alloc_lstdelone(point, del);
			point = next;
		}
		lst[0] = 0;
	}
}
