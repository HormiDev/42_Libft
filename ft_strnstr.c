/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:18:38 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 09:56:30 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cont;
	size_t	contb;
	size_t	needlesize;

	needlesize = ft_strlen(needle);
	if (needlesize == 0)
		return ((char *)haystack);
	cont = 0;
	while (cont < len && haystack[cont] != 0 && needlesize + cont <= len)
	{
		contb = 0;
		while (haystack[cont + contb] == needle[contb])
		{
			if (needle[contb + 1] == 0)
				return ((char *)haystack + cont);
			contb++;
		}
		cont++;
	}
	return (0);
}
/**********************************DESCRIPCION**********************************
La función 'ft_strnstr' es una implementación personalizada de 'strnstr' en C. 
Esta función busca la primera aparición de la cadena 'needle' en la cadena 
'haystack', pero no busca más allá de los primeros 'len' caracteres de 
'haystack'.

La función toma tres argumentos: dos punteros a cadenas 'haystack' y 'needle', 
y un tamaño 'len'.

Dentro de la función, se calcula la longitud de 'needle' usando la función 
'ft_strlen'.

Si la longitud de 'needle' es 0, la función devuelve 'haystack'. Esto se debe a 
que una cadena vacía se encuentra al principio de cualquier cadena.

Luego, se inicializan dos variables de contador 'cont' y 'contb' a 0. 'cont' se 
usa para recorrer 'haystack' y 'contb' se usa para recorrer 'needle'.

La función entra en un bucle while que se ejecuta mientras 'cont' sea menor que 
'len', el carácter actual de 'haystack' no sea 0, y la longitud de 'needle' más 
'cont' sea menor o igual a 'len'.

Dentro de este bucle, se entra en otro bucle while que se ejecuta mientras el 
carácter actual de 'haystack' sea igual al carácter actual de 'needle'. Si el 
siguiente carácter de 'needle' es 0, significa que se ha encontrado una 
coincidencia completa de 'needle' en 'haystack', por lo que la función devuelve 
un puntero al inicio de esta coincidencia en 'haystack'.

Si no se encuentra una coincidencia completa de 'needle' en 'haystack' dentro 
del rango especificado por 'len', la función devuelve 0.

En resumen, 'ft_strnstr' busca la primera aparición de una cadena en otra 
dentro de un rango especificado y devuelve un puntero al inicio de esta 
aparición, o 0 si no se encuentra la cadena.
*******************************************************************************/
/*
#include <string.h>

int main() {
    const char *cadena1 = "Hola, ¿cómo estás?";
    const char *cadena2 = "¿cómo";

	char *resultado = strnstr(cadena1, cadena2, strlen(cadena1));
	printf("Con strnstr %s\n", resultado);

	resultado = ft_strnstr(cadena1, cadena2, strlen(cadena1));
	printf("Con ft_strnstr %s\n", resultado);

    return 0;
}*/
