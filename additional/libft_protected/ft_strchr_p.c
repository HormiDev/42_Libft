/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 19:09:11 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/02 19:17:20 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_protected.h"

/**
* @brief Version protegida de 'ft_strchr' en C.
* 
* @param str Cadena de caracteres.
* @param c Caracter a buscar.
* @return char* Devuelve un puntero al primer carácter 'c' en 'str', o NULL si
* 'c' no está en 'str'.
*/
char	*ft_strchr_p(const char *str, int c)
{
	char	cchar;

	if (!str)
		return (0);
	cchar = (char)c;
	while (*str != '\0')
	{
		if (*str == cchar)
			return ((char *)str);
		str++;
	}
	if (cchar == '\0')
		return ((char *)str);
	return (0);
}
