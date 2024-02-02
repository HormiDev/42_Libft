/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:17:18 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/01 16:09:34 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cont;
	char	*dest;
	char	*str;

	if (dst == 0 && src == 0)
		return (0);
	dest = (char *)dst;
	str = (char *)src;
	cont = 0;
	while (cont < n)
	{
		dest[cont] = str[cont];
		cont++;
	}
	return (dst);
}
/*
#include <string.h>

int main () {
    const char src[50] = "Holaaaaa!!";
	const char src2[50] = "Mundo cruellll";
    char dest[50];

    strcpy(dest,"Heloooo!!");
    printf("Antes memcpy dest = %s\n", dest);

    memcpy(dest, src, strlen(src)+1);
    printf("Despues memcpy dest = %s\n", dest);

	ft_memcpy(dest, src2, strlen(src2)+1);
	printf("Despues ft_memcpy dest = %s\n", dest);
	

    return(0);
}*/
