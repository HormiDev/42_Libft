/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:07:42 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/02 22:36:51 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*calloc(size_t count, size_t size)
{
	void	*punt;

	punt = malloc(count * size);
	if (punt)
	{
		ft_bzero(punt, count * size);
		return (punt);
	}
	else
		return (NULL);
}
