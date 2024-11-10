/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:06:54 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/11/10 17:24:20 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_protected.h"

/**
* @brief Version de 'ft_strlcpy' que se protege de punteros nulos.
*
* @param dst Cadena de destino.
* @param src Cadena de origen.
* @param dstsize Tamaño del destino.
* @return size_t Longitud de la cadena de origen.
*/
size_t	ft_strlcpy_p(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	size_t	srclen;

	cont = 0;
	if (!src)
		return (0);
	srclen = ft_strlen_p(src);
	if (dstsize == 0 || !dst)
		return (srclen);
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
