/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:42:29 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/10 21:49:58 by ide-dieg         ###   ########.fr       */
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

void	liberate(char **matriz, int nstr)
{
	while (nstr-- > 0)
	{
		free(matriz[nstr]);
	}
	free(matriz);
}

char	**ft_split2(char const *s, char c, char	**matriz, size_t len)
{
	size_t	cont;
	size_t	checkpoit;
	int		nstr;

	cont = 0;
	nstr = 0;
	checkpoit = 0;
	while (cont < len)
	{
		if (s[cont] != c)
		{
			checkpoit = cont;
			while (s[cont] != c && s[cont] != 0)
				cont++;
			matriz[nstr] = ft_substr(s, checkpoit, cont - checkpoit);
			if (matriz[nstr++] == 0)
			{
				liberate(matriz, nstr - 1);
				return (0);
			}
		}
		cont++;
	}
	matriz[nstr] = 0;
	return (matriz);
}

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	size_t	len;

	len = ft_strlen(s);
	matriz = malloc((ft_strworlds(s, c) + 1) * sizeof(char *));
	if (matriz)
	{
		return (ft_split2(s, c, matriz, len));
	}
	return (0);
}
/*
int main()
{
    char **result;

    result = ft_split("Hola mundo me llamo ivan", ' ');

    for (int i = 0; result[i] != NULL; i++)
    {
        printf("%s$\n", result[i]);
    }

    return 0;
}
*/
/*
char	**ft_split(char const *s, char c)
{
	char	**matriz;
	size_t	len;
	size_t	cont;
	size_t	checkpoit;
	int		nstr;

	len = ft_strlen(s);
	cont = 0;
	nstr = 0;
	checkpoit = 0;
	matriz = malloc((ft_strworlds(s, c) + 1) * sizeof(char *));
	if (matriz)
	{
		while (cont < len)
		{
			if (s[cont] != c)
			{
				checkpoit = cont;
				while (s[cont] != c && s[cont] != 0)
					cont++;
				matriz[nstr] = ft_substr(s, checkpoit, cont - checkpoit);
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
*/