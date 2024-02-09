/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:42:29 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/09 01:16:56 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strworlds(char const *s, char c)
{
	int	cont;
	int	palabras;
	int	len;
	
	len = ft_strlen(s);
	palabras = 0;
	cont = 1;
	if (s[0] != c && s[0] != 0)
		palabras++;
	while (cont < len)
	{
		if (s[cont] != c && s[cont - 1] == c)
			palabras++;
		cont++;
	}
	return (palabras);
}

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	size_t	len;
	size_t	cont;
	size_t	anterior;
	int		nstr;

	len = ft_strlen(s);
	cont = 0;
	nstr = 0;
	anterior = 0;
	matriz = malloc((ft_strworlds(s, c) + 1) * sizeof(char *));
	if (matriz)
	{
		while (cont < len)
		{
			if (s[cont] != c)
			{
				anterior = cont;
				while (s[cont] != c && s[cont] != 0)
					cont++;
				matriz[nstr] = ft_substr(s, anterior, cont - anterior);
				if (matriz[nstr] == 0)
				{
					while (nstr-- > 0)
					{
						free(matriz[nstr]);
					}
					free(matriz);
					return (0);
				}
				nstr++;
			}
			cont++;
		}
		matriz[nstr] = 0;
		return (matriz);
	}
	return (0);
}
/*
int main()
{
    char **result;

    result = ft_split("", 'a');

    for (int i = 0; result[i] != NULL; i++)
    {
        printf("%s$\n", result[i]);
    }

    return 0;
}

*/