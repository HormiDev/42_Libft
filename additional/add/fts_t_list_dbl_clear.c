/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_t_list_dbl_clear.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:55:11 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/12/11 15:01:31 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief Libera toda la memoria asociada con una lista doblemente enlazada.
 *
 * Esta función libera toda la memoria asociada con un `t_list_dbl`
 * y establece el puntero de la `t_list_dbl` a NULL.
 *
 * @param lst Doble puntero a la lista doblemente enlazada que se va a 
 * limpiar.
 *
 * La función recorre la lista, libera la memoria de cada nodo y finalmente
 * establece el puntero de la lista a NULL para evitar accesos posteriores
 * a memoria liberada.
 */
void	ft_list_dbl_delone(t_list_dbl **lst, void (*del)(void *))
{
	t_list_dbl	*tmp;

	if (!lst || !*lst)
		return ;
	tmp = *lst;
	if (tmp->prev)
		tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	if (del)
		del(tmp->content);
	free(tmp);
	*lst = 0;
}

/**
 * @brief Libera toda la memoria asociada con una lista doblemente enlazada.
 *
 * Esta función libera toda la memoria asociada con un `t_list_dbl`
 * y establece el puntero de la `t_list_dbl` a NULL.
 *
 * @param lst Doble puntero a la lista doblemente enlazada que se va a 
 * limpiar.
 *
 * La función recorre la lista, libera la memoria de cada nodo y finalmente
 * establece el puntero de la lista a NULL para evitar accesos posteriores
 * a memoria liberada.
 */
void	ft_list_dbl_clear(t_list_dbl **lst, void (*del)(void *))
{
	t_list_dbl	*tmp;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		if (del)
			del(tmp->content);
		free(tmp);
	}
	*lst = 0;
}
