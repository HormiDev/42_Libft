/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 03:23:53 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/12/08 03:39:39 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"
#include <limits.h>

static int	ft_longlen(long n);

char	*ft_ltoa(long n)
{
	char	*str;
	int		len;

	len = ft_longlen(n);
	str = ft_calloc((len + 1), sizeof(char));
	if (str == 0)
		return (NULL);
	str[len] = 0;
	if (n >= 0)
		n = n * -1;
	else
		str[0] = '-';
	while ((len > 0 && str[0] == 0) || (len > 1 && str[0] == '-'))
	{
		str[len - 1] = ((n % 10) * -1 + '0');
		n = n / 10;
		len--;
	}
	return (str);
}

static int	ft_longlen(long n)
{
	int		len;
	long	mult;

	if (n == LONG_MIN)
		return (20);
	len = 1;
	mult = 1;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n / mult > 9)
	{
		len++;
		mult = mult * 10;
	}
	return (len);
}
