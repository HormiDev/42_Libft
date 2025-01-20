/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 02:11:02 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/20 03:22:36 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DPRINTF_H
# define FT_DPRINTF_H

# include "../../libft.h"

int		ft_dprintf(int fd, const char *format, ...);
int		ft_dprintf_nbr_base(int fd, long n, char *base);
int		ft_dprintf_nbr_base_u(int fd, unsigned long n, char *base);
int		ft_dprintf_str(int fd, char *s);

#endif