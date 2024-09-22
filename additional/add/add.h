/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:06:19 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/22 14:54:59 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADD_H
# define ADD_H

typedef struct s_strlist
{
	char				*str;
	int					len;
	struct s_strlist	*next;
}	t_strlist;

t_strlist	*ft_strlist_add_new(t_strlist *lst, char *str);
void		ft_strlist_clear(t_strlist **lst);
int			ft_strlist_size(t_strlist *lst);
t_strlist	*ft_strlist_last(t_strlist *lst);
void		ft_strlist_change(t_strlist *lst, char *str);

#endif