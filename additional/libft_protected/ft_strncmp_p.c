/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:49:20 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/08 17:51:33 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_protected.h"

int	ft_strncmp_p(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	while (cont < n)
	{
		if (s1[cont] != s2[cont])
			return ((unsigned char)s1[cont] - (unsigned char)s2[cont]);
		else if (s1[cont] == 0)
			return (0);
		cont++;
	}
	return (0);
}