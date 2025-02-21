/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:33:28 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/02/21 17:51:26 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_alloc.h"

/**
* @brief Version de 'ft_substr' que reserva memoria con 'ft_alloc_lst'
* liberando la memoria de la lista en caso de error y retornando NULL.
*
* @param s Cadena de la que se extraera la subcadena.
* @param start Indice de inicio de la subcadena.
* @param len Longitud de la subcadena.
* @return char* Subcadena extraida o NULL en caso de error.
*/
char	*ft_substr_a(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	cont;
	size_t	s_len;

	if (!s)
		return (0);
	cont = 0;
	s_len = ft_strlen_p(s);
	if (start >= s_len)
		return (ft_strdup_a(""));
	else if (s_len - start < len)
		len = s_len - start;
	str = ft_alloc_lst(len + 1, 1);
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

/**
* @brief Version de 'ft_substr' que reserva memoria con 'ft_alloc_lst'
* liberando la memoria de la lista en caso de error y finalizando el programa.
*
* @param s Cadena de la que se extraera la subcadena.
* @param start Indice de inicio de la subcadena.
* @param len Longitud de la subcadena.
* @return char* Subcadena extraida o cierra el programa en caso de error.
*/
char	*ft_substr_ae(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	cont;
	size_t	s_len;

	if (!s)
		return (0);
	cont = 0;
	s_len = ft_strlen_p(s);
	if (start >= s_len)
		return (ft_strdup_ae(""));
	else if (s_len - start < len)
		len = s_len - start;
	str = ft_alloc_lst(len + 1, 3);
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
