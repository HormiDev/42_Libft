/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:58:57 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/23 17:03:16 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief Devuelve la lista de punteros a memoria reservada.
 * 
 * @param n_list Número de la lista a devolver.
 * `1:` Lista de punteros a memoria reservada.
 * `2:` Lista de punteros a ficheros abiertos.
 * @return void* Puntero a la lista solicitada o NULL en caso de error.
 */
void	*ft_get_alloc_lst(int n_list)
{
	static t_alloc	alloc;

	if (n_list == 1)
		return (alloc.alloc_lst);
	else if (n_list == 2)
		return (alloc.fd_lst);
	else
		return (0);
}

void	*ft_alloc_clear(void)
{
	ft_open_fd_lst(0, 0, 0);
	ft_alloc_lst(0, 0);
	return (0);
}