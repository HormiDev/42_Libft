/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:08:57 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/04 00:02:36 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/**********************************DESCRIPCION**********************************
La función 'ft_isalpha' es una implementación personalizada de 'isalpha' en C. 
Esta función verifica si un carácter es alfabético.

La función toma un argumento, un entero 'c', que se supone que es el valor 
ASCII de un carácter.

Dentro de la función, hay una declaración if que verifica si el valor de 'c' 
está en el rango de las letras minúsculas (de 'a' a 'z') o en el rango de las 
letras mayúsculas (de 'A' a 'Z'). Si 'c' está en alguno de estos rangos, 
significa que es un carácter alfabético, por lo que la función devuelve 1.

Si 'c' no está en ninguno de estos rangos, significa que no es un carácter 
alfabético, por lo que la función devuelve 0. En resumen, 'ft_isalpha' devuelve 
1 si el carácter es alfabético y 0 si no lo es.
*******************************************************************************/
/*
#include <unistd.h>
#include <ctype.h>

int main()
{
	char a = 48 + ft_isalpha('2');
	write(1, &a, 1);
	a = 48 + isalpha('2');
	write(1, &a, 1);
}*/
