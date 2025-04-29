/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:06:11 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/29 21:17:42 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SNPRINTF_H
# define FT_SNPRINTF_H

# include "../../libft.h"

int		ft_snprintf(char *str, size_t size, const char *format, ...);
void	ft_snprintf_nbr_base(char *str, int len_size[2], long n, char *base);
void	ft_snprintf_nbr_base_u(char *str, int len_size[2], unsigned long n,
			char *base);
void	ft_snprintf_char(char *str, int *len, char c);
void	ft_snprintf_str(char *str, int len_size[2], char *s);

#endif