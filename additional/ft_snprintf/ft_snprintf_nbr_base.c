/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snprintf_nbr_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:28:55 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/29 21:13:28 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_snprintf.h"

void	ft_snprintf_nbr_base(char *str, int len_size[2], long n, char *base)
{
	int		lenbase;
	long	mult;

	lenbase = ft_strlen_p(base);
	if (n < 0)
	{
		str[len_size[0]] = '-';
		(len_size[0])++;
	}
	else
		n = -n;
	mult = 1;
	while (n / mult <= -lenbase)
		mult = mult * lenbase;
	while (mult >= lenbase && len_size[0] < len_size[1] - 1)
	{
		str[len_size[0]] = base[(n / mult) % lenbase * -1];
		(len_size[0])++;
		mult = mult / lenbase;
	}
	if (len_size[0] >= len_size[1] - 1)
		return ;
	str[len_size[0]] = base[(n / mult) % lenbase * -1];
	(len_size[0])++;
}
