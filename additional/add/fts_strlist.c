/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_strlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:09:33 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/22 14:54:15 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "add.h"
# include "../../libft.h"

void	ft_strlist_clear(t_strlist **lst)
{
	t_strlist	*tmp;
	t_strlist	*next;

	if (!lst || !*lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		next = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = next;
	}
	*lst = 0;
}

t_strlist	*ft_strlist_add_new(t_strlist *lst, char *str)
{
	t_strlist	*new;
	t_strlist	*tmp;

	new = malloc(sizeof(t_strlist));
	if (!new)
	{
		ft_strlist_clear(&lst);
		return (0);
	}
	new->str = ft_strdup(str);
	new->len = ft_strlen(str);
	if (!lst)
		return (new);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (lst);
}

int	ft_strlist_size(t_strlist *lst)
{
	int			i;
	t_strlist	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

t_strlist	*ft_strlist_last(t_strlist *lst)
{
	t_strlist	*tmp;

	if (!lst)
		return (0);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	ft_strlist_change(t_strlist *lst, char *str)
{
	if (!lst)
		return ;
	free(lst->str);
	lst->str = ft_strdup(str);
	lst->len = ft_strlen(str);
}
