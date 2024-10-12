/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_str_rectangular_array.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 20:43:29 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/29 01:01:15 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

char	**ft_create_str_rectangular_array(int x, int y)
{
	char	**array;
	int		i;

	array = (char **)malloc(sizeof(char *) * y);
	if (!array)
		return (0);
	i = 0;
	while (i < y)
	{
		array[i] = (char *)malloc(sizeof(char) * x);
		if (!array[i])
		{
			ft_free_str_rectangular_array(array, i);
			return (0);
		}
		i++;
	}
	return (array);
}

void	ft_free_str_rectangular_array(char **array, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
