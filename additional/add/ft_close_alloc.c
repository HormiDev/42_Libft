/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:13:02 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/23 18:15:09 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

static void	ft_close_alloc_while(int fd, t_list *lst, t_list *prev)
{
	while (lst)
	{
		if (*(int *)(lst->content) == fd)
		{
			close(*(int *)(lst->content));
			prev->next = lst->next;
			ft_free_alloc(lst->content);
			break ;
		}
		prev = lst;
		lst = lst->next;
	}
}

void	ft_close_alloc(int fd)
{
	t_list	**lstt;
	t_list	*lst;
	t_list	*prev;

	lstt = ft_get_alloc_lst(2);
	if (lstt && *lstt && (*(int *)(*lstt)->content) == fd)
	{
		close(*(int *)(*lstt)->content);
		lst = (*lstt)->next;
		ft_free_alloc((*lstt)->content);
		*lstt = lst;
		return ;
	}
	prev = *lstt;
	lst = (*lstt)->next;
	ft_close_alloc_while(fd, lst, prev);
}
