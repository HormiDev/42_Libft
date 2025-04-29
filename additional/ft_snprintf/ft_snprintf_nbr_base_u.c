/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snprintf_nbr_base_u.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 00:27:15 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/29 16:30:28 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_snprintf.h"

void	ft_snprintf_nbr_base_u(char *str, int *len, unsigned long n, char *base)
{
	unsigned int	lenbase;

	lenbase = ft_strlen_p(base);
	if (n >= lenbase)
	{
		ft_sprintf_nbr_base_u(str, len, n / lenbase, base);
		n = n % lenbase;
	}
	str[*len] = base[n];
	(*len)++;
}
