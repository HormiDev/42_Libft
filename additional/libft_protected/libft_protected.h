/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_protected.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:06:07 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/11/10 18:09:04 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PROTECTED_H
# define LIBFT_PROTECTED_H

# include "../../libft.h"

size_t	ft_strlen_p(const char *str);
char	*ft_strdup_p(const char *s1);
char	*ft_strjoin_p(char const *s1, char const *s2);
size_t	ft_strlcpy_p(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat_p(char *dst, const char *src, size_t dstsize);
char	**ft_split_p(char const *s, char c);
char	*ft_substr_p(char const *s, unsigned int start, size_t len);

#endif