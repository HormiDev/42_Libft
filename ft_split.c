/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:42:29 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 07:24:23 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strworlds(char const *s, char c);
static void		liberate(char **matriz, int nstr);
static char		**ft_split2(char const *s, char c, char	**matriz, size_t len);

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
/**********************************DESCRIPCION**********************************
La función 'ft_split' es la primera parte de una función dividida mara pasar la 
norminette que divide una cadena de caracteres en varias palabras, donde las 
palabras están separadas por un carácter específico. La función devuelve un 
array de cadenas de caracteres, donde cada cadena es una palabra.

La función toma dos argumentos: una cadena de caracteres 's' y un carácter 'c'. 
El objetivo es dividir 's' en palabras que están separadas por el carácter 'c'.

Primero, utiliza la función 'ft_strlen' para calcular la longitud de 's' y 
almacena el resultado en 'len'.

Luego, asigna memoria para 'matriz', que es un array de cadenas de caracteres. 
El tamaño del array es el número de palabras en 's' (calculado por 
'ft_strworlds') más uno, para tener en cuenta el último elemento nulo.

Si la asignación de memoria para 'matriz' es exitosa, llama a la función 
'ft_split2' con 's', 'c', 'matriz' y 'len' como argumentos y devuelve el 
resultado. Donde se realiza la división real de la cadena en palabras.

Si la asignación de memoria para 'matriz' no es exitosa, la función devuelve 0.
*******************************************************************************/

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
/**********************************DESCRIPCION**********************************
La función 'ft_split2' es la segunda parte de una función dividida que divide 
una cadena de caracteres en varias palabras, donde las palabras están separadas 
por un carácter específico. La función llena un array de cadenas de caracteres, 
donde cada cadena es una palabra.

La función toma cuatro argumentos: una cadena de caracteres 's', un carácter 
'c', un array de cadenas de caracteres 'matriz' y la longitud de 's' como 
'len'. El objetivo es llenar 'matriz' con palabras de 's' que están separadas 
por el carácter 'c'.

Primero, inicializa 'cont', 'nstr' y 'checkpoit' a 0. 'cont' se usará como 
contador en un bucle, 'nstr' almacenará el número de palabras y 'checkpoit' 
se usará para marcar el inicio de una palabra.

Luego, entra en un bucle while que continúa mientras 'cont' sea menor que 
'len'. Dentro del bucle, si el carácter actual en 's' no es 'c', marca el 
inicio de la palabra con 'checkpoit' y continúa hasta encontrar otro carácter 
'c' o el final de la cadena. Luego, utiliza 'ft_substr' para extraer la palabra 
de 's' y la almacena en 'matriz'.

Si la asignación de memoria para la palabra es exitosa, incrementa 'nstr' en 
uno. Si no, llama a la función 'liberate' para liberar la memoria asignada para 
'matriz' y devuelve 0.

Después de eso, incrementa 'cont' en uno. Cuando el bucle termina, establece el 
último elemento de 'matriz' en 0 y devuelve 'matriz'.
*******************************************************************************/

static int	ft_strworlds(char const *s, char c)
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
/**********************************DESCRIPCION**********************************
La función 'ft_strworlds' cuenta el número de palabras en una cadena de 
caracteres, donde las palabras están separadas por un carácter específico.

La función toma dos argumentos: una cadena de caracteres 's' y un carácter 'c'. 
El objetivo es contar cuántas veces aparecen las palabras en 's' que están 
separadas por el carácter 'c'.

Primero, utiliza la función 'ft_strlen' para calcular la longitud de 's' y 
almacena el resultado en 'len'. Luego, inicializa 'palabras' (que almacenará 
el número de palabras) a 0 y 'cont' (que se usará como contador en un bucle) 
a 1.

Si el primer carácter de 's' no es 'c' y no es el carácter nulo, incrementa 
'palabras' en uno, porque eso significa que la cadena comienza con una palabra.

Luego, entra en un bucle while que continúa mientras 'cont' sea menor que 'len'.
Dentro del bucle, si el carácter actual en 's' no es 'c' y el carácter anterior 
es 'c', incrementa 'palabras' en uno. Esto se debe a que una nueva palabra 
comienza después de cada aparición de 'c'. Después de eso, incrementa 'cont' 
en uno.

Cuando el bucle termina, la función devuelve 'palabras', que es el número de 
palabras en 's' que están separadas por el carácter 'c'.
*******************************************************************************/

static void	liberate(char **matriz, int nstr)
{
	while (nstr-- > 0)
	{
		free(matriz[nstr]);
	}
	free(matriz);
}
/**********************************DESCRIPCION**********************************
La función 'liberate' se utiliza para liberar la memoria asignada a un array 
de cadenas de caracteres.

La función toma dos argumentos: un array de cadenas de caracteres 'matriz' y 
un entero 'nstr'. El objetivo es liberar la memoria asignada a cada cadena en 
'matriz' y luego liberar la memoria asignada a 'matriz' en sí.

Primero, entra en un bucle while que continúa mientras 'nstr' sea mayor que 
0. Dentro del bucle, libera la memoria asignada a la cadena en la posición 
'nstr' de 'matriz' y luego decrementa 'nstr' en uno. Esto se hace para cada 
cadena en 'matriz'.

Después de que todas las cadenas en 'matriz' han sido liberadas, libera la 
memoria asignada a 'matriz' en sí.
*******************************************************************************/
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
/**********************************DESCRIPCION**********************************
La función 'ft_split' divide una cadena de caracteres en varias palabras, donde 
las palabras están separadas por un carácter específico. La función devuelve un 
array de cadenas de caracteres, donde cada cadena es una palabra.

La función toma dos argumentos: una cadena de caracteres 's' y un carácter 'c'. 
El objetivo es dividir 's' en palabras que están separadas por el carácter 'c'.

Primero, utiliza la función 'ft_strlen' para calcular la longitud de 's' y 
almacena el resultado en 'len'. Luego, inicializa 'cont', 'nstr' y 'checkpoit' 
a 0. 'cont' se usará como contador en un bucle, 'nstr' almacenará el número de 
palabras y 'checkpoit' se usará para marcar el inicio de una palabra.

Luego, asigna memoria para 'matriz', que es un array de cadenas de caracteres. 
El tamaño del array es el número de palabras en 's' (calculado por 
'ft_strworlds') más uno, para tener en cuenta el último elemento nulo.

Si la asignación de memoria para 'matriz' es exitosa, entra en un bucle while 
que continúa mientras 'cont' sea menor que 'len'. Dentro del bucle, si el 
carácter actual en 's' no es 'c', marca el inicio de la palabra con 'checkpoit' 
y continúa hasta encontrar otro carácter 'c' o el final de la cadena. Luego, 
utiliza 'ft_substr' para extraer la palabra de 's' y la almacena en 'matriz'.

Si la asignación de memoria para la palabra es exitosa, incrementa 'nstr' en 
uno. Si no, libera la memoria asignada para 'matriz' y las palabras, y 
devuelve 0.

Después de eso, incrementa 'cont' en uno. Cuando el bucle termina, establece 
el último elemento de 'matriz' en 0 y devuelve 'matriz'.

Si la asignación de memoria para 'matriz' no es exitosa, la función devuelve 0.
*******************************************************************************/