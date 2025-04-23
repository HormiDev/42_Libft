/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_alloc_fd_lst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:06:26 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/23 17:02:50 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

int	ft_open_fd_lst_a(t_list **lst, char *path, int flags, ...)
{
	int				*fd;
	va_list			args;

	va_start(args, flags);
	fd = ft_alloc_lst(sizeof(int), 1);
	if (!fd)
	{
		ft_dprintf(2, "\e[31mError\n\e[33m%s: Fail to allocate memory\n\e[0m", path);
		ft_alloc_clear();
		return (-1);
	}
	*fd = open(path, flags, va_arg(args, int));
	if (*fd == -1)
	{
		ft_dprintf(2, "\e[31mError\n\e[33m%s: Fail to open file\n\e[0m", path);
		ft_alloc_clear();
		return (-1);
	}
	ft_lstadd_back(lst, ft_lstnew_ae(fd));
	return (*fd);
}

int	ft_open_fd_lst_ae(t_list **lst, char *path, int flags, ...)
{
	int				*fd;
	va_list			args;

	va_start(args, flags);
	fd = ft_alloc_lst(sizeof(int), 3);
	*fd = open(path, flags, va_arg(args, int));
	if (*fd == -1)
	{
		ft_dprintf(2, "\e[31mError\n\e[33m%s: Fail to open file\n\e[0m", path);
		ft_alloc_clear();
		exit(EXIT_FAILURE);
	}
	ft_lstadd_back(lst, ft_lstnew_ae(fd));
	return (*fd);
}

void	ft_close_dirs(t_list *lst)
{
	while (lst)
	{
		close(*(int *)(lst->content));
		lst = lst->next;
	}
}

int	ft_open_fd_lst(int n_func, char *path, int flags, ...)
{
	t_list	*lst;
	va_list	args;

	lst = ft_get_alloc_lst(2);
	va_start(args, flags);
	if (n_func == 0)
	{
		ft_close_dirs(lst);
		return (0);
	}
	if (n_func == 1)
		return (ft_open_fd_lst_a(&lst, path, flags, args));
	if (n_func == 2)
		return (ft_open_fd_lst_ae(&lst, path, flags, args));
	return (-1);
}

void	ft_close_alloc(int fd)
{
	t_list	*lst;

	lst = ft_get_alloc_lst(2);
	while (lst)
	{
		if (*(int *)(lst->content) == fd)
		{
			close(*(int *)(lst->content));
			ft_free_alloc(lst->content);
			break ;
		}
		lst = lst->next;
	}
}