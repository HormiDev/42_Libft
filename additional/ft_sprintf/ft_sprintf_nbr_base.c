/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf_nbr_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:28:55 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/09 13:32:43 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sprintf.h"

void	ft_sprintf_nbr_base(char *str, int *len, long n, char *base)
{
	int		lenbase;
	long	mult;

	lenbase = ft_strlen_p(base);
	if (n < 0)
	{
		str[*len] = '-';
		(*len)++;
	}
	else
		n = -n;
	mult = 1;
	while (n / mult <= -lenbase)
		mult = mult * lenbase;
	while (mult >= lenbase)
	{
		str[*len] = base[(n / mult) % lenbase * -1];
		(*len)++;
		mult = mult / lenbase;
	}
	str[*len] = base[(n / mult) % lenbase * -1];
	(*len)++;
}
