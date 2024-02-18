/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:15:46 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 09:56:17 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	cont;

	cont = 0;
	while (str[cont] != 0)
	{
		cont++;
	}
	return (cont);
}
/**********************************DESCRIPCION**********************************
La función 'ft_strlen' en el código C proporcionado es una implementación 
personalizada de la función estándar de la biblioteca 'strlen' en C. Esta 
función calcula la longitud de la cadena 'str'.

La función toma un argumento: un puntero a una cadena 'str'.

Dentro de la función, se inicializa una variable de contador 'cont' a 0. Esta 
variable se usará para recorrer la cadena y contar el número de caracteres.

Luego, la función entra en un bucle while que se ejecuta mientras el carácter 
actual de 'str' no sea 0, que es el carácter nulo que marca el final de las 
cadenas en C.

Dentro del bucle, se incrementa 'cont'. Esto se hace por cada carácter en 'str' 
hasta que se encuentra el carácter nulo.

Finalmente, la función devuelve 'cont', que es la longitud de la cadena 'str'.

En resumen, 'ft_strlen' calcula y devuelve la longitud de una cadena, sin 
incluir el carácter nulo final.
*******************************************************************************/
/*
#include <string.h>

int main() {
    char str1[] = "";
    char str2[] = "Hola, mundo";
    char str3[] = "¿Como andamos?";

    printf("'%s' %lu %lu\n", str1, strlen(str1), ft_strlen(str1));
    printf("'%s' %lu %lu\n", str2, strlen(str2), ft_strlen(str2));
    printf("'%s' %lu %lu\n", str3, strlen(str3), ft_strlen(str3));

    return 0;
}
*/