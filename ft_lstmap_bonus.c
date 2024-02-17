/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:43:19 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/17 21:39:41 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*listnew;
	t_list	*point;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	listnew = ft_lstnew(f(lst->content));
	if (listnew == 0)
	{
		ft_lstclear(&listnew, del);
		return (0);
	}
	point = listnew;
	lst = lst->next;
	while (lst != 0)
	{
		point->next = ft_lstnew(f(lst->content));
		if (point->next == 0)
		{
			ft_lstclear(&listnew, del);
			return (0);
		}
		point = point->next;
		lst = lst->next;
	}
	return (listnew);
}
*/
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*listnew;
	t_list	*point;
	void	*buffer;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	buffer = f(lst->content);
	listnew = ft_lstnew(buffer);
	if (listnew == 0)
	{
		del(buffer);
		ft_lstclear(&listnew, del);
		return (0);
	}
	point = listnew;
	lst = lst->next;
	while (lst != 0)
	{
		buffer = f(lst->content);
		point->next = ft_lstnew(buffer);
		if (point->next == 0)
		{
			del(buffer);
			ft_lstclear(&listnew, del);
			return (0);
		}
		point = point->next;
		lst = lst->next;
	}
	return (listnew);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*listnew;
	t_list	*point;
	void	*buffer;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	listnew = 0;
	while (lst != 0)
	{
		buffer = f(lst->content);
		point = ft_lstnew(buffer);
		if (point == 0)
		{
			del(buffer);
			ft_lstclear(&listnew, del);
			return (0);
		}
		ft_lstadd_back(&listnew, point);
		lst = lst->next;
	}
	return (listnew);
}