/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snprintf_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:18:12 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/29 21:15:34 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_snprintf.h"

void	ft_snprintf_str(char *str, int len_size[2], char *s)
{
	int	slen;

	if (s)
	{
		slen = ft_strlen(s);
		if (slen > len_size[1] - len_size[0])
			slen = len_size[1] - len_size[0];
		ft_strncpy(str + len_size[0], s, slen);
		len_size[0] += slen;
	}
	else
	{
		if (len_size[1] - len_size[0] > 6)
			slen = 6;
		else
			slen = len_size[1] - len_size[0];
		ft_strncpy(str + len_size[0], "(null)", slen);
		len_size[0] += slen;
	}
}
