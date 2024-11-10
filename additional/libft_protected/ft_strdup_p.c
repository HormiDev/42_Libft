/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:51:27 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/11/10 14:56:16 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_protected.h"

/**
* @brief Version de 'ft_strdup' que se protege de un puntero nulo.
*
* @param s1 Cadena de caracteres.
* @return char* Duplicado de la cadena o NULL en caso de error.
*/
char	*ft_strdup_p(const char *s1)
{
	char	*str;
	size_t	cont;
	size_t	s_len;

	if (!s1)
		return (0);
	s_len = ft_strlen_p(s1);
	cont = 0;
	str = malloc((s_len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (cont < s_len)
	{
		str[cont] = s1[cont];
		cont++;
	}
	str[cont] = 0;
	return (str);
}
