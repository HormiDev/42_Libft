/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:46:14 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/11/10 15:24:20 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_alloc.h"

/**
* @brief Version de 'ft_strdup' que reserva memoria con 'ft_alloc_lst'
* liberando la memoria de la lista en caso de error y retornando NULL.
*
* @param s1 Cadena de caracteres.
* @return char* Duplicado de la cadena o NULL en caso de error.
*/
char	*ft_strdup_a(const char *s1)
{
	char	*str;
	size_t	cont;
	size_t	s_len;

	if (!s1)
		return (0);
	s_len = ft_strlen_p(s1);
	cont = 0;
	str = ft_alloc_lst(s_len + 1, 1);
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

/**

*/
char	*ft_strdup_ae(const char *s1)
{
	char	*str;
	size_t	cont;
	size_t	s_len;

	if (!s1)
		return (0);
	s_len = ft_strlen_p(s1);
	cont = 0;
	str = ft_alloc_lst(s_len + 1, 2);
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