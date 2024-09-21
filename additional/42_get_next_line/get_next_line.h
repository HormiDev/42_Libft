/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:51:16 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/22 00:26:49 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# if BUFFER_SIZE > 2147483647 || BUFFER_SIZE < 0
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct buffer_lst
{
	char				*content;
	int					lencontent;
	struct buffer_lst	*next;
}	t_buffer_lst;

char			*get_next_line(int fd);
t_buffer_lst	*ft_addnewlst(t_buffer_lst *lst);
t_buffer_lst	*cleanbuffer(t_buffer_lst *lst, int endline);
int				ft_buffer_lst_len(t_buffer_lst *lst);
t_buffer_lst	*ft_lstlast_g(t_buffer_lst *lst);
int				ft_strnchr(const char *str, int c, int len);
void			ft_lstclear_g(t_buffer_lst **lst, void (*del)(void*));
char			*lstjoin(t_buffer_lst *lst, int endline);

#endif