/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:52:07 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/02 01:26:37 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	len;
	int	num;
	int	mult;

	num = 0;
	mult = 1;
	len = ft_strlen(str) - 1;
	while (len > 0)
	{
		if (ft_isdigit(str[len]))
		{
			num += (str[len] - 48) * -mult;
			mult *= 10;
		}
		else
		{
			num = 0;
			mult = 1;
		}
		len--;
	}
	if (ft_isdigit(str[0]))
		num = (num + (str[0] - 48) * -mult) * -1;
	else if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '+')
			num *= -1;
	}
	else
		num = 0;
	return (num);
}
/*
#include <stdlib.h>

int main() {
    // Definimos cuatro cadenas
    char *str1 = "100hola";
    char *str2 = "--200-";
    char *str3 = "-2147483648";
    char *str4 = "2147483647";

    // Convertimos las cadenas a enteros usando atoi()
    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);
    int num4 = atoi(str4);
    printf("atoi: %d, %d, %d, y %d\n", num1, num2, num3, num4);

	// Convertimos las cadenas a enteros usando ft_atoi()
    num1 = ft_atoi(str1);
    num2 = ft_atoi(str2);
    num3 = ft_atoi(str3);
    num4 = ft_atoi(str4);
    printf("ft_atoi: %d, %d, %d, y %d\n", num1, num2, num3, num4);

    return 0;
}
*/