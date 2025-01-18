/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:45:51 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/18 16:57:29 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_protected.h"
/**
 * @brief Version de 'ft_atoi' que se protege de punteros nulos y convierte la
 * cadena de caracteres a un entero. 
 * @param str Cadena de caracteres.
 * @return int Entero convertido o 0 en caso de error.
 */
int	ft_atoi_p(const char *str)
{
	if (!str)
		return (0);
	return (ft_atoi(str));
}
