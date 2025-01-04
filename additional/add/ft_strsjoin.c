/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 14:00:23 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/04 21:09:36 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief Concatena un array de cadenas en una sola cadena.
 * 
 * @param strs Array de cadenas a concatenar.
 * @param size Tamaño del array de cadenas.
 * @return char* La cadena resultante de la concatenación.
 * @return 0 Si no se puede asignar memoria.
 */
static int	ft_strslen(const char **str, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		if (str[i] == 0)
			len += 0;
		else
			len += ft_strlen(str[i]);
		i++;
	}
	return (len);
}

char	*ft_strsjoin(const char **strs, int size)
{
	char	*str;
	int		i;
	int		len;

	if (size == 0 || strs == 0)
		return (0);
	len = ft_strslen(strs, size);
	str = malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		if (strs[i] != 0)
			ft_strlcat(str, strs[i], len + 1);
		i++;
	}
	str[len] = '\0';
	return (str);
}
