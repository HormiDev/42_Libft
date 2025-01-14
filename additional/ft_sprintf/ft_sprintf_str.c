/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:18:12 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/14 23:25:49 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sprintf.h"

void	ft_sprintf_str(char *str, int *len, char *s)
{
	if (s)
	{
		ft_strncpy(str + *len, s, ft_strlen(s));
		*len += ft_strlen(s);
	}
	else
	{
		ft_strncpy(str + *len, "(null)", 6);
		*len += 6;
	}
}
