/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:00:23 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/02 19:08:04 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_protected.h"

/**
 * @brief Version protegida de 'ft_strnstr' en C.
 * 
 * @param haystack Cadena de caracteres.
 * @param needle Cadena de caracteres a buscar.
 * @param len Tamaño de la cadena de caracteres.
 * @return char* Devuelve un puntero al comienzo de la primera aparición de
 * 'needle' en 'haystack', o NULL si 'needle' no está en 'haystack'.
 */
char	*ft_strnstr_p(const char *haystack, const char *needle, size_t len)
{
	size_t	cont;
	size_t	contb;
	size_t	needlesize;

	if (needle == 0)
		return ((char *)haystack);
	if (haystack == 0)
		return (0);
	needlesize = ft_strlen(needle);
	if (needlesize == 0)
		return ((char *)haystack);
	cont = 0;
	while (cont < len && haystack[cont] != 0 && needlesize + cont <= len)
	{
		contb = 0;
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
