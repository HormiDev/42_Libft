/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:06:11 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/09 13:32:09 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPRINTF_H
# define FT_SPRINTF_H

# include "../../libft.h"

int		ft_sprintf(char *str, const char *format, ...);
void	ft_sprintf_nbr_base(char *str, int *len, long n, char *base);
void	ft_sprintf_nbr_base_u(char *str, int *len, unsigned long n, char *base);
void	ft_sprintf_char(char *str, int *len, char c);
void	ft_sprintf_str(char *str, int *len, char *s);

#endif