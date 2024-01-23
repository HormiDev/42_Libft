/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:07:46 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/19 22:55:43 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*str;
	size_t			cont;

	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	cont = 0;
	if (!dst && !src)
		return (dst);
	if (dest < str)
	{
		while (len--)
		{
			dest[cont] = str[cont];
			cont++;
		}
	}
	else
	{
		while (len--)
		{
			dest[len] = str[len];
		}
	}
	return (dst);
}
/*
#include <string.h>

int main () {
    const char src1[50] = "Hola";
    const char src2[50] = "Mundo cruel";
    char dest[50];

    strcpy(dest,"Heloooo!!");
    printf("Antes memcpy dest = %s\n", dest);
    printf("Posicion de src1 = %p, dest = %p\n", (void*)src1, (void*)dest);

    char* ret1 = memmove(dest, src1, strlen(src1)+1);
    printf("Despues memcpy dest = %s\n", dest);
    printf("Retorno de memmove = %s, Posicion de = %p\n", ret1, (void*)ret1);
    printf("Posicion de src1 = %p, dest = %p\n", (void*)src1, (void*)dest);

    printf("Posicion de src2 = %p, dest = %p\n", (void*)src2, (void*)dest);

    char* ret2 = ft_memmove(dest, src2, strlen(src2)+1);
    printf("Despues ft_memcpy dest = %s\n", dest);
    printf("Retorno de ft_memmove = %s, Posicion de = %p\n", ret2, (void*)ret2);
    printf("Posicion de src2 = %p, dest = %p\n", (void*)src2, (void*)dest);

    return 0;
}
*/
