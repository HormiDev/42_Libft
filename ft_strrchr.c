/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:40:02 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/12 19:47:40 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*resultado;

	resultado = 0;
	while (*str != '\0')
	{
		if (*str == c)
			resultado = ((char *)str);
		str++;
	}
	return (resultado);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[11] = "Hola mundo";
	char caracter = 'j';
	char *resultado = strrchr(str, caracter);
	printf("posicion : %ld\n", resultado - str);
	resultado = ft_strrchr(str, caracter);
	printf("posicion : %ld\n", resultado - str);
}
*/
