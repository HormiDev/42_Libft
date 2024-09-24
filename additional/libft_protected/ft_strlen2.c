/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:15:27 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/22 17:06:42 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_protected.h"

size_t	ft_strlen2(const char *str)
{
	size_t	cont;

	cont = 0;
	if (!str)
		return (0);
	while (str[cont] != 0)
	{
		cont++;
	}
	return (cont);
}
