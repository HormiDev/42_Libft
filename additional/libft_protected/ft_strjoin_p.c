/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:35:40 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/11/12 18:51:32 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_protected.h"

/**
* @brief Version de 'ft_strjoin' que se protege de punteros nulos.
*
* @param s1 Cadena de caracteres.
* @param s2 Cadena de caracteres.
* @return char* Cadena concatenada o NULL en caso de error.
*/
char	*ft_strjoin_p(char const *s1, char const *s2)
{
	char	*str;
	int		s1len;
	int		s2len;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (ft_strdup_p(s2));
	if (!s2)
		return (ft_strdup_p(s1));
	s1len = ft_strlen_p(s1);
	s2len = ft_strlen_p(s2);
	str = malloc((s1len + s2len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	ft_strlcpy_p(str, s1, s1len + 1);
	ft_strlcat_p(str, s2, s1len + s2len + 1);
	return (str);
}
