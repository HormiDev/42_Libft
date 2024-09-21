/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:52:58 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/17 22:17:04 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*lstjoin(t_buffer_lst *lst, int endline)
{
	char	*line;
	int		cont;
	int		cont2;

	line = malloc((ft_buffer_lst_len(lst) + endline + 2) * sizeof(char));
	if (line == 0)
		return (0);
	cont = 0;
	while (lst->next != 0)
	{
		cont2 = 0;
		while (cont2 < lst->lencontent)
			line[cont++] = lst->content[cont2++];
		lst = lst -> next;
	}
	cont2 = 0;
	while (cont2 <= endline)
		line[cont++] = lst->content[cont2++];
	line[cont] = '\0';
	return (line);
}

void	ft_lstclear(t_buffer_lst **lst, void (*del)(void*))
{
	t_buffer_lst	*next;
	t_buffer_lst	*point;

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

int	ft_strnchr(const char *str, int c, int len)
{
	char	cchar;
	int		cont;

	if (str == 0 || len < 0)
		return (-1);
	cont = 0;
	cchar = (char)c;
	while (cont < len)
	{
		if (str[cont] == cchar)
		{
			return (cont);
		}
		cont++;
	}
	return (-1);
}

t_buffer_lst	*ft_lstlast(t_buffer_lst *lst)
{
	if (lst == 0)
		return (0);
	while (lst -> next != 0)
	{
		lst = lst -> next;
	}
	return (lst);
}
