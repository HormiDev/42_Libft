/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:57:07 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/11/22 20:09:38 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
* @brief Lee una línea de la entrada estándar.
*
* @param msg Mensaje a mostrar antes de leer la línea.
* @return La línea leída de la entrada estándar.
*/
char	*ft_input(char *msg)
{
	char	*line;

	if (msg)
		ft_putstr_fd(msg, 1);
	line = get_next_line(0);
	get_next_line(-1);
	return (line);
}
