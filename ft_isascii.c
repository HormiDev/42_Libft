/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:43:35 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/04 00:02:42 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/**********************************DESCRIPCION**********************************
La función 'ft_isascii' es una implementación personalizada 'isascii' en C. 
Esta función verifica si un carácter está en la tabla ASCII.

La función toma un argumento, un entero 'c', que se supone que es el valor 
ASCII de un carácter.

Dentro de la función, hay una declaración if que verifica si el valor de 'c' 
está en el rango de los valores ASCII, que es de 0 a 127. Si 'c' está en este 
rango, significa que es un carácter ASCII, por lo que la función devuelve 1.

Si 'c' no está en este rango, significa que no es un carácter ASCII, por lo 
que la función devuelve 0. En resumen, 'ft_isascii' devuelve 1 si el carácter 
está en la tabla ASCII y 0 si no lo está.
*******************************************************************************/
/*
#include <unistd.h>
#include <ctype.h>

int main()
{
	char a = 48 + ft_isascii(128);
	write(1, &a, 1);
	a = 48 + isascii(128);
	write(1, &a, 1);
}*/
