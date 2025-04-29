/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_chars_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:04:17 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/29 20:49:45 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_alloc.h"

static int		ft_strworlds(char const *s, char *c);

static char	**ft_split2_a(char const *s, char *c, char	**matriz, size_t len)
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
			matriz[nstr] = ft_substr_a(s, checkpoit, cont - checkpoit);
			if (matriz[nstr++] == 0)
				return (0);
		}
		cont++;
	}
	matriz[nstr] = 0;
	return (matriz);
}

static char	**ft_split2_ae(char const *s, char *c, char	**matriz, size_t len)
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
			matriz[nstr] = ft_substr_ae(s, checkpoit, cont - checkpoit);
			if (matriz[nstr++] == 0)
				return (0);
		}
		cont++;
	}
	matriz[nstr] = 0;
	return (matriz);
}

/**
* @brief Version de 'ft_split' recibe un string de caracteres separadores
* y usa la funcion de asignacion de memoria 'ft_alloc' con el flag cerrndo
* el proceso en caso de error.
*
* @param s Cadena de caracteres.
* @param c Cadena de caracteres separadores.
* @return char** Array de cadenas de caracteres o NULL en caso de error.
*/
char	**ft_split_chars_ae(char const *s, char *c)
{
	char	**matriz;
	size_t	len;

	if (!s || !c)
		return (0);
	len = ft_strlen_p(s);
	matriz = ft_alloc_lst(((ft_strworlds(s, c) + 1) * sizeof(char *)), 3);
	if (matriz)
	{
		return (ft_split2_ae(s, c, matriz, len));
	}
	return (0);
}

/**
* @brief Version de 'ft_split' recibe un string de caracteres separadores
* y usa la funcion de asignacion de memoria 'ft_alloc'.
*
* @param s Cadena de caracteres.
* @param c Cadena de caracteres separadores.
* @return char** Array de cadenas de caracteres o NULL en caso de error.
*/
char	**ft_split_chars_a(char const *s, char *c)
{
	char	**matriz;
	size_t	len;

	if (!s || !c)
		return (0);
	len = ft_strlen_p(s);
	matriz = ft_alloc_lst(((ft_strworlds(s, c) + 1) * sizeof(char *)), 1);
	if (matriz)
	{
		return (ft_split2_a(s, c, matriz, len));
	}
	return (0);
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
