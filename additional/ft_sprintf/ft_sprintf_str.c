/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:18:12 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/09 13:32:48 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sprintf.h"

void	ft_sprintf_str(char *str, int *len, char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		str[*len] = s[i];
		(*len)++;
		i++;
	}
}
