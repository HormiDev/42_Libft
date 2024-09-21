/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:12:47 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/20 23:50:04 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr_base(long n, char *base, int lenbase);
int	ft_putchar(char c);
int	ft_strlen_int(const char *str);
int	ft_putstr(char *s);
int	ft_putnbr_base_p(long n, char *base, int lenbase);

#endif