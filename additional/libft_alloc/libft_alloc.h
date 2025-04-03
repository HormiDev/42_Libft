/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_alloc.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:29:11 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/03 14:12:33 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_ALLOC_H
# define LIBFT_ALLOC_H

# include "../../libft.h"

typedef struct s_list	t_list;

char	*ft_substr_a(char const *s, unsigned int start, size_t len);
char	*ft_substr_ae(char const *s, unsigned int start, size_t len);
char	*ft_strdup_a(const char *s1);
char	*ft_strdup_ae(const char *s1);
char	*ft_strjoin_a(char const *s1, char const *s2);
char	*ft_strjoin_ae(char const *s1, char const *s2);
char	**ft_split_a(char const *s, char c);
char	**ft_split_ae(char const *s, char c);
t_list	*ft_lstnew_a(void *content);
t_list	*ft_lstnew_ae(void *content);
char	**ft_split_chars_a(char const *s, char *c);
char	**ft_split_chars_ae(char const *s, char *c);

#endif