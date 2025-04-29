/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snprintf_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:18:12 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/29 17:37:24 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_snprintf.h"

void	ft_snprintf_str(char *str, int *len, int size, char *s)
{
	int slen;

	if (s)
	{
		slen = ft_strlen(s);
		if (slen > size - *len)
			slen = size - *len;
		ft_strncpy(str + *len, s, slen);
		*len += slen;
	}
	else
	{
		if (size - *len > 6)
			slen = 6;
		else
			slen = size - *len;
		ft_strncpy(str + *len, "(null)", slen);
		*len += 6;
	}
}
