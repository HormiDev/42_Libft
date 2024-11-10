/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:11:25 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/11/10 19:23:38 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_alloc.h"

static int		ft_strworlds(char const *s, char c);
static void		liberate(char **matriz, int nstr);
static char		**ft_split2(char const *s, char c, char	**matriz, size_t len);

/**
* @brief Version de 'ft_split' que reserva memoria con 'ft_alloc_lst'
* liberando la memoria de la lista en caso de error y retornando NULL.
*
* @param s Cadena de caracteres.
* @param c Caracter separador.
* @return char** Array de cadenas de caracteres o NULL en caso de error.
*/
char	**ft_split_a(char const *s, char c)
{
	char	**matriz;
	size_t	len;

	if (!s)
		return (0);
	len = ft_strlen_p(s);
	matriz = ft_alloc_lst((ft_strworlds(s, c) + 1) * sizeof(char *), 1);
	if (matriz)
	{
		return (ft_split2(s, c, matriz, len));
	}
	return (0);
}

static char	**ft_split2(char const *s, char c, char	**matriz, size_t len)
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
			matriz[nstr] = ft_substr_a(s, checkpoit, cont - checkpoit);
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

static int	ft_strworlds(char const *s, char c)
{
	int	cont;
	int	palabras;
	int	len;

	len = ft_strlen_p(s);
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

static void	liberate(char **matriz, int nstr)
{
	while (nstr-- > 0)
	{
		free(matriz[nstr]);
	}
	free(matriz);
}
