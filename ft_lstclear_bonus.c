/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:33:05 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/14 20:49:56 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*point;

	if (lst != 0 && del != 0)
	{
		point = lst[0];
		while (point != 0)
		{
			next = point->next;
			del(point->content);
			free(point);
			point = next;
		}
		lst[0] = 0;
	}
}
