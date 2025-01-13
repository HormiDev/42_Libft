/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_alloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:34:31 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/13 18:04:35 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

static void	search_and_free(t_list *lst_alloc, void *ptr)
{
	t_list	*tmp;

	tmp = lst_alloc;
	while (lst_alloc->next)
	{
		tmp = lst_alloc;
		lst_alloc = lst_alloc->next;
		if (lst_alloc->content == ptr)
		{
			free(lst_alloc->content);
			tmp->next = lst_alloc->next;
			free(lst_alloc);
			break ;
		}
	}
}

/**
 * @brief Libera la memoria asignada por ft_calloc, ft_malloc, ft_realloc
 * 
 * @param ptr Puntero al bloque de memoria a liberar
 * @warning Esta función puede ser ineficiente si se utiliza con una gran 
 * cantidad de bloques de memoria asignados. Se recomienda utilizarla con 
 * precaución y considerar otras alternativas más eficientes si es necesario 
 * liberar muchos bloques de memoria.
 */
void	ft_free_alloc(void *ptr)
{
	t_list	*lst_alloc;

	lst_alloc = ft_alloc_lst(0, 5);
	if (!lst_alloc || !ptr)
		return ;
	if (lst_alloc->content == ptr)
	{
		free(lst_alloc->content);
		lst_alloc->content = 0;
	}
	else
		search_and_free(lst_alloc, ptr);
}
