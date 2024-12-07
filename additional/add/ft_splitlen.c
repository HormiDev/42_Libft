/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:29:50 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/12/07 22:15:47 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

int	ft_splitlen(char **split)
{
	int	i;

	if (!split)
		return (0);
	i = 0;
	while (split[i])
		i++;
	return (i);
}