/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 01:41:28 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/06 21:48:59 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	cont;
	size_t	s_len;

	cont = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	else if (s_len - start < len)
		len = s_len - start;
	str = malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (cont < len)
	{
		str[cont] = s[cont + (size_t)start];
		cont++;
	}
	str[cont] = 0;
	return (str);
}
/**********************************DESCRIPCION**********************************
La función 'ft_substr' toma tres argumentos: una cadena de caracteres 's', un 
entero sin signo 'start' que representa el índice de inicio desde donde se debe 
extraer la subcadena, y un tamaño 'len' que representa la longitud de la 
subcadena a extraer.

Primero, la función declara algunas variables: 'str' que será la subcadena 
resultante, 'cont' que se utilizará como contador en un bucle, y 's_len' que 
almacenará la longitud de la cadena de entrada 's'.

La longitud de 's' se calcula utilizando la función 'ft_strlen' y se almacena 
en 's_len'. Luego, la función verifica si el índice de inicio 'start' es mayor 
o igual que 's_len'. Si es así, significa que el índice de inicio está fuera de 
los límites de la cadena 's', por lo que la función devuelve una cadena vacía 
utilizando la función 'ft_strdup'.

Si 'start' es menor que 's_len', la función verifica si la longitud restante de 
la cadena desde 'start' es menor que 'len'. Si es así, ajusta 'len' para que 
sea igual a la longitud restante de la cadena.

A continuación, la función intenta asignar memoria para la subcadena 'str' 
utilizando 'malloc'. El tamaño de la memoria a asignar es 
('len' + 1) * sizeof(char), donde 'len' + 1 es la longitud de la subcadena más 
el carácter nulo de terminación, y sizeof(char) es el tamaño de un carácter en 
bytes. Si la asignación de memoria falla, la función devuelve 0.

Si la asignación de memoria tiene éxito, la función entra en un bucle while que 
copia 'len' caracteres de 's' a 'str', comenzando desde el índice 'start'. 
Finalmente, la función agrega un carácter nulo al final de 'str' y devuelve 
'str'.
*******************************************************************************/
/*
int main()
{
    char const *s;
    char *result;

    s = "Hola, mundo!";
    result = ft_substr(s, 0, 5);
    printf("Prueba recortando len: %s\n", result);
    free(result);

	s = "Hola, mundo!";
    result = ft_substr(s, 5, 10);
    printf("Prueba aumentando start: %s\n", result);
    free(result);

    s = "Hola, mundo!";
    result = ft_substr(s, 0, 500000000000);
    printf("Prueba con len demasiado largo: %s\n", result);
    free(result);

    s = "Hola, mundo!";
    result = ft_substr(s, 50000000, 5);
    printf("Prueba con start demasiado largo: %s\n", result);
    free(result);

    s = "";
    result = ft_substr(s, 0, 5);
    printf("Prueba con s vacío: %s\n", result);
    free(result);

    return 0;
}
*/