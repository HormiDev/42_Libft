/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf_nbr_base_u.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 00:27:15 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/09 01:50:38 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sprintf.h"

void	ft_sprintf_nbr_base_u(char *str, int *len, unsigned long n, char *base)
{
	unsigned int	lenbase;

	lenbase = ft_strlen_p(base);
	if (n >= lenbase)
	{
		ft_sprintf_nbr_base_u(str, len, n / lenbase, base);
		n = n % lenbase;
	}
	else
	{
		str[*len] = base[n] + '0';
		(*len)++;
	}
}