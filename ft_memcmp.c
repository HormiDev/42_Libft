/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:52:21 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/18 20:42:30 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cont;
	unsigned char	*str1;
	unsigned char	*str2;

	cont = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (cont < n)
	{
		if (str1[cont] != str2[cont])
			return (str1[cont] - str2[cont]);
		cont++;
	}
	return (0);
}
/*
#include <string.h>

int main() {
    char s1[] = "Hola Mundo";
    char s2[] = "Hola mundo";

    int resultado = memcmp(s1, s2, sizeof(s1));
    printf("memcmp: %d\n", resultado);

	resultado = ft_memcmp(s1, s2, sizeof(s1));
	printf("ft_memcmp: %d\n", resultado);

    return 0;
}*/
