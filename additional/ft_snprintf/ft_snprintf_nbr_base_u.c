/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snprintf_nbr_base_u.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 00:27:15 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/29 21:17:55 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_snprintf.h"

void	ft_snprintf_nbr_base_u(char *str, int len_size[2], unsigned long n,
			char *base)
{
	unsigned int	lenbase;

	lenbase = ft_strlen_p(base);
	if (n >= lenbase)
	{
		ft_snprintf_nbr_base_u(str, len_size, n / lenbase, base);
		n = n % lenbase;
	}
	if (len_size[0] >= len_size[1] - 1)
		return ;
	str[len_size[0]] = base[n];
	(len_size[0])++;
}
