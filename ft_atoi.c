/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:52:07 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/23 01:52:54 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	num;
	int	cont;

	cont = 0;
	num = 0;
	if (str[cont])
	while (str[cont] =! 0)
	{

	}
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Definimos cuatro cadenas
    char *str1 = "100hola";
    char *str2 = "--200-";
    char *str3 = "-7892147483648";
    char *str4 = "+2147483647";

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
    printf("atoi: %d, %d, %d, y %d\n", num1, num2, num3, num4);

    return 0;
}
