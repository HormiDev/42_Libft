/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:01:20 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/11/10 18:07:46 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_protected.h"

/**
* @brief Version de 'ft_substr' que se protege de punteros nulos.
*
* @param s Cadena de la que se extraera la subcadena.
* @param start Indice de inicio de la subcadena.
* @param len Longitud de la subcadena.
* @return char* Subcadena extraida o NULL en caso de error.
*/
char	*ft_substr_p(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	cont;
	size_t	s_len;

	if (!s)
		return (0);
	cont = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	else if (s_len - start < len)
		len = s_len - start;
	str = malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (cont < len)
	{
		str[cont] = s[cont + (size_t)start];
		cont++;
	}
	str[cont] = 0;
	return (str);
}
