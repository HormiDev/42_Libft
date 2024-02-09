/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:44:25 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/08 22:36:37 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

char	*ft_itoa(int n)
{
	char	*str = 0;
	int 	len;
	int		mult;
	
	len = 1;
	mult = 1;
	while (n / mult > 9)
	{
		len++;
		mult = mult * 10;
	}
	malloc((len + 1) * sizeof(char));
	mult = 0;// Reciclar es bueno para el planeta
	while (mult < len)
	{
		
	}
	return (str);
}

int main()
{
	ft_itoa(-100);
	return 0;
}