/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:49:32 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/12 19:37:17 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int a)
{
	while (*str != '\0')
	{
		if (*str == a)
			return ((char *)str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[11] = "Hola mundo";
	char caracter = 'o';
	char *resultado = strchr(str, caracter);
	printf("posicion : %ld\n", resultado - str);
	resultado = ft_strchr(str, caracter);
	printf("posicion : %ld\n", resultado - str);
}
*/
