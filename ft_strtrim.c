/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 05:19:00 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/06 21:13:54 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	inicio;
	size_t	fin;

	if (s1 == 0 || set == 0)
		return (0);
	inicio = 0;
	fin = ft_strlen(s1);
	while (s1[inicio] != 0 && ft_strchr(set, s1[inicio]) != 0)
	{
		inicio++;
	}
	while (fin > inicio && ft_strchr(set, s1[fin - 1]) != 0)
	{
		fin--;
	}
	str = ft_substr(s1, inicio, fin - inicio);
	return (str);
}
/**********************************DESCRIPCION**********************************
La función 'ft_strtrim' recorta los caracteres de inicio y final de una cadena 
('s1') que están presentes en otra cadena ('set').

La función comienza verificando si las cadenas 's1' o 'set' son nulas. Si 
alguna de ellas es nula, la función retorna 0 (NULL).

Luego, inicializa dos variables de tamaño ('inicio' y 'fin'). 'inicio' se 
inicializa en 0 y 'fin' se inicializa con la longitud de la cadena 's1' 
utilizando la función 'ft_strlen'.

Después, la función entra en un bucle while que recorre la cadena 's1' desde el 
inicio. Si el carácter actual está presente en la cadena 'set' (verificado por 
la función 'ft_strchr'), incrementa 'inicio'. Este bucle se detiene cuando 
encuentra un carácter que no está en 'set' o cuando se ha recorrido toda la 
cadena.

A continuación, la función entra en un segundo bucle while que recorre la 
cadena 's1' desde el final. Si el carácter actual está presente en la cadena 
'set', decrementa 'fin'. Este bucle se detiene cuando encuentra un carácter que 
no está en 'set' o cuando 'fin' es menor o igual a 'inicio'.

Finalmente, la función 'ft_substr' se utiliza para extraer la subcadena de 's1' 
desde 'inicio' hasta 'fin' - 'inicio'. Esta subcadena es la cadena 's1' con los 
caracteres de 'set' recortados del inicio y del final. Esta subcadena se 
devuelve como resultado de la función 'ft_strtrim'.
*******************************************************************************/
/*
int main()
{
    char const *s1 = ". ,Hola, Mundo! .,,";
    char const *set = " .,";
    char *resultado;

    resultado = ft_strtrim(s1, set);

    if (resultado != NULL)
    {
        printf("Cadena original: '%s'\n", s1);
		printf("Cedena set: '%s'\n", set);
        printf("Cadena recortada: '%s'\n", resultado);
        free(resultado);  // No olvides liberar la memoria
    }
    else
    {
        printf("Error al recortar la cadena.\n");
    }

    return 0;
}
*/