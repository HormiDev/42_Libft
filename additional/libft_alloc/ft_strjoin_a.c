/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:45:02 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/11/10 18:10:28 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_alloc.h"

/**
* @brief Version de 'ft_strjoin' que reserva memoria con 'ft_alloc_lst'
* liberando la memoria de la lista en caso de error y retornando NULL.
*
* @param s1 Cadena de caracteres.
* @param s2 Cadena de caracteres.
* @return char* Cadena concatenada o NULL en caso de error.
*/
char	*ft_strjoin_a(char const *s1, char const *s2)
{
	char	*str;
	int 	s1len;
	int 	s2len;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (ft_strdup_a(s2));
	if (!s2)
		return (ft_strdup_a(s1));
	s1len = ft_strlen_p(s1);
	s2len = ft_strlen_p(s2);
	str = ft_alloc_lst(s1len + s2len + 1, 1);
	if (str == 0)
		return (0);
	ft_strlcpy_p(str, s1, s1len + 1);
	ft_strlcat_p(str, s2, s1len + s2len + 1);
	return (str);
}
/**
* @brief Version de 'ft_strjoin' que reserva memoria con 'ft_alloc_lst'
* liberando la memoria de la lista en caso de error y finalizando el programa.
*
* @param s1 Cadena de caracteres.
* @param s2 Cadena de caracteres.
* @return char* Cadena concatenada o cierra el programa en caso de error.
*/
char	*ft_strjoin_ae(char const *s1, char const *s2)
{
	char	*str;
	int 	s1len;
	int 	s2len;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (ft_strdup_ae(s2));
	if (!s2)
		return (ft_strdup_ae(s1));
	s1len = ft_strlen_p(s1);
	s2len = ft_strlen_p(s2);
	str = ft_alloc_lst(s1len + s2len + 1, 2);
	if (str == 0)
		return (0);
	ft_strlcpy_p(str, s1, s1len + 1);
	ft_strlcat_p(str, s2, s1len + s2len + 1);
	return (str);
}