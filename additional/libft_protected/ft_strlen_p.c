/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:34:52 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/11/10 14:54:06 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_protected.h"

/**
* @brief Version de 'ft_strlen' que se protege de un puntero nulo.
*
* @param str Cadena de caracteres.
* @return size_t Longitud de la cadena.
*/
size_t	ft_strlen_p(const char *str)
{
	size_t	cont;

	cont = 0;
	if (!str)
		return (0);
	while (str[cont] != 0)
	{
		cont++;
	}
	return (cont);
}
