/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:59:25 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/31 22:25:54 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	cont;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	cont = 0;
	if (dstsize == 0)
		return (srclen);
	while (dstlen + cont < dstsize - 1 && src[cont] != '\0')
	{
		dst[dstlen + cont] = src[cont];
		cont++;
	}
	dst[dstlen + cont] = '\0';
	if (dstsize < dstlen)
		return (dstsize + srclen);
	return (dstlen + srclen);
}
/*
#include <string.h>

int main() 
{
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