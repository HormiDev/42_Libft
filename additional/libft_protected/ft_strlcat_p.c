/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:25:43 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/11/10 17:39:10 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_protected.h"

/**
* @brief Version de 'ft_strlcat' que se protege de punteros nulos.
*
* @param dst Cadena de destino.
* @param src Cadena de origen.
* @param dstsize Tamaño del destino.
* @return size_t Longitud de la cadena concatenada.
*/
size_t	ft_strlcat_p(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	cont;

	if (!dst && !src)
		return (0);
	if (!dst)
		return (ft_strlen_p(src));
	if (!src)
		return (ft_strlen_p(dst));
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
