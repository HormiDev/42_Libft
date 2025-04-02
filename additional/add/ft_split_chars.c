/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:54:05 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/02 19:56:23 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

static int		ft_strworlds(char const *s, char *c);
static void		liberate(char **matriz, int nstr);
static char		**ft_split2(char const *s, char *c, char **matriz, size_t len);

/**
* @brief Version de 'ft_split' recibe un string de caracteres separadores.
*
* @param s Cadena de caracteres.
* @param c Cadena de caracteres separadores.
* @return char** Array de cadenas de caracteres o NULL en caso de error.
*/
char	**ft_split_chars(char const *s, char *c)
{
	char	**matriz;
	size_t	len;

	if (!s || !c)
		return (0);
	len = ft_strlen_p(s);
	matriz = malloc((ft_strworlds(s, c) + 1) * sizeof(char *));
	if (matriz)
	{
		return (ft_split2(s, c, matriz, len));
	}
	return (0);
}

static char	**ft_split2(char const *s, char *c, char	**matriz, size_t len)
{
	size_t	cont;
	size_t	checkpoit;
	int		nstr;

	cont = 0;
	nstr = 0;
	checkpoit = 0;
	while (cont < len)
	{
		if (!ft_strchr_p(c, s[cont]))
		{
			checkpoit = cont;
			while (!ft_strchr_p(c, s[cont]) && s[cont] != 0)
				cont++;
			matriz[nstr] = ft_substr_p(s, checkpoit, cont - checkpoit);
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

static int	ft_strworlds(char const *s, char *c)
{
	int	cont;
	int	palabras;
	int	len;

	len = ft_strlen_p(s);
	palabras = 0;
	cont = 1;
	if (!ft_strchr_p(c, s[0]) && s[0] != 0)
		palabras++;
	while (cont < len)
	{
		if (!ft_strchr_p(c, s[cont]) && ft_strchr_p(c, s[cont - 1]))
			palabras++;
		cont++;
	}
	return (palabras);
}

static void	liberate(char **matriz, int nstr)
{
	while (nstr-- > 0)
	{
		free(matriz[nstr]);
	}
	free(matriz);
}
