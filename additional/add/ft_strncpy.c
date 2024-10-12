/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:42:03 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/28 20:51:57 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief Copia una cadena a otra con un tamaño máximo.
 * 
 * Esta función copia la cadena 'src' a la cadena 'dst' con un tamaño máximo 
 * 'len'. Si 'src' es mas corta que 'len', la función rellena el resto de 'dst'
 * con caracteres nulos.
 * 
 * @param dst Puntero a la cadena de destino.
 * @param src Puntero a la cadena de origen.
 * @param len Tamaño máximo de la cadena de destino.
 * @return Un puntero a la cadena de destino.
 */
char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
