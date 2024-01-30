/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:47:23 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/01/30 01:46:40 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	size_t	srclen;

	cont = 0;
	srclen = ft_strlen(src);
	if (dstsize > 0)
	{
		while (cont < srclen && cont < dstsize - 1)
		{
			dst[cont] = src[cont];
			cont++;
		}
		dst[cont] = 0;
	}
	return (srclen);
}
/*
#include <string.h>

int main() {
    char src[50] = "aaa";
    char dst[5];
    char dst2[5];
    size_t ret1, ret2;

    ret1 = strlcpy(dst, src, 0);
    printf("strlcpy returned: %zu, Result: %s\n", ret1, dst);

    ret2 = ft_strlcpy(dst2, src, 0);
    printf("ft_strlcpy returned: %zu, Result: %s\n", ret2, dst2);

    return 0;
}
*/
