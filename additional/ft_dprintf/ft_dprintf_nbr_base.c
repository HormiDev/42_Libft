/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_nbr_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 03:04:08 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/20 03:26:39 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"

static long	ft_mult(long n, int lenbase)
{
	long	mult;

	mult = 1;
	while (n / mult >= lenbase)
		mult = mult * lenbase;
	return (mult);
}

int	ft_dprintf_nbr_base(int fd, long n, char *base)
{
	int		lenbase;
	long	mult;
	int		len;

	lenbase = ft_strlen_p(base);
	if (n < 0)
	{
		if (write(fd, "-", 1) < 0)
			return (-1);
		len = 1;
		n = -n;
	}
	else
		len = 0;
	mult = ft_mult(n, lenbase);
	while (mult >= lenbase)
	{
		if (write(fd, &base[(n / mult) % lenbase * -1], 1) < 0)
			return (-1);
		mult = mult / lenbase;
		len++;
	}
	if (write(fd, &base[(n / mult) % lenbase * -1], 1) < 0)
		return (-1);
	return (len + 1);
}
