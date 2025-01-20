/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_nbr_base_u.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 03:05:56 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/20 03:26:59 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

int	ft_dprintf_nbr_base_u(int fd, unsigned long n, char *base)
{
	unsigned int	lenbase;
	int				len;

	len = 0;
	lenbase = ft_strlen_p(base);
	if (n >= lenbase)
	{
		len += ft_dprintf_nbr_base_u(fd, n / lenbase, base);
		if (len < 0)
			return (-1);
		n = n % lenbase;
	}
	if (write(fd, &base[n], 1) < 0)
		return (-1);
	return (len + 1);
}
