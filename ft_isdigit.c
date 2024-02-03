/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:32:10 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/04 00:02:50 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/**********************************DESCRIPCION**********************************
La función 'ft_isdigit' es una implementación personalizada de 'isdigit' en C. 
Esta función verifica si un carácter es un dígito numérico.

La función toma un argumento, un entero 'c', que se supone que es el valor 
ASCII de un carácter.

Dentro de la función, hay una declaración if que verifica si el valor de 'c' 
está en el rango de los dígitos numéricos, es decir, de '0' a '9'. Si 'c' está 
en este rango, significa que es un dígito numérico, por lo que la función 
devuelve 1.

Si 'c' no está en este rango, significa que no es un dígito numérico, por lo 
que la función devuelve 0. En resumen, 'ft_isdigit' devuelve 1 si el carácter 
es un dígito numérico y 0 si no lo es.
*******************************************************************************/
/*
#include <unistd.h>
#include <ctype.h>

int main()
{
	char a = 48 + ft_isdigit('a');
	write(1, &a, 1);
	a = 48 + isdigit('a');
	write(1, &a, 1);
}
*/
