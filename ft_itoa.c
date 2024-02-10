/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:44:25 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/10 14:31:37 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int 	len;
	int		mult;

	if (n == -2147483648)
		return (11);
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

char	*ft_itoa(int n)
{
	char	*str = 0;
	int 	len;
	int		mult;
	char	negative;

	str = malloc((len + 1) * sizeof(char));
	str[len + 1] = 0;
	mult = 0;// Reciclar es bueno para el planeta
	while (mult < 10)
	{
		
	}
	return (str);
}

int main()
{
	printf("%d\n", ft_intlen(1000));
	printf("%d\n", ft_intlen(-2147483648));
	printf("%d\n", ft_intlen(2147483647));
	printf("%d\n", ft_intlen(-2147483647));
	return 0;
}