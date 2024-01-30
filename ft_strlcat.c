/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:59:25 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/30 01:44:48 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	size_t	cont2;

	cont = 0;
	cont2 = 0;
	while (dst[cont] != 0 && cont + cont2 < dstsize)
	{
		cont++;
	}
	while (*src != 0 && cont + cont2 < dstsize)
	{
		dst[cont2 + cont] = *src;
		src++;
		cont2++;
	}
	if (cont + cont2 == dstsize)
		dst[cont2 + cont - 1] = 0;
	while (*src != 0)
	{
		src++;
		cont2++;
	}
	return (cont + cont2);
}
/*
#include <string.h>

int main() {
char dst[8] = "Hola, ";
char src[50] = "Mundo!";
size_t ret;

printf("dst antes de llamar a strlcat: %s\n", dst);
printf("Posición de memoria de dst antes de strlcat: %p\n", (void *)dst);
ret = strlcat(dst, src, sizeof(dst));
printf("Return value of strlcat: %zu\n", ret);
printf("%s\n", dst);
printf("Posición de memoria de dst después de strlcat: %p\n", (void *)dst);

strcpy(dst, "Hola, "); // Reestablece dst a "Hola, "
printf("dst antes de llamar a ft_strlcat: %s\n", dst);
printf("Posición de memoria de dst antes de ft_strlcat: %p\n", (void *)dst);
ret = ft_strlcat(dst, src, sizeof(dst)); // Usa src en lugar de src2
printf("Return value of ft_strlcat: %zu\n", ret);
printf("%s\n", dst);
printf("Posición de memoria de dst después de ft_strlcat: %p\n", (void *)dst);

    return 0;
}
*/