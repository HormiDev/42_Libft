/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:18:38 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/20 21:55:15 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cont;
	size_t	contb;

	cont = 0;
	while (cont < len && haystack[cont] != 0)
	{
		contb = cont;
		while (haystack[cont + contb] == needle[contb])
		{
			if (needle[contb + 1] == 0)
				return ((char *)haystack + cont);
			contb++;
		}
		cont++;
	}
	return (0);
}
/*
#include <string.h>

int main() {
    const char *cadena1 = "Hola, ¿cómo estás?";
    const char *cadena2 = "¿cómo";

	char *resultado = strnstr(cadena1, cadena2, strlen(cadena1));
	printf("Con strnstr %s\n", resultado);

	resultado = ft_strnstr(cadena1, cadena2, strlen(cadena1));
	printf("Con ft_strnstr %s\n", resultado);

    return 0;
}*/
