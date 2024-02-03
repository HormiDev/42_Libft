/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:29:33 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/04 00:02:27 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/**********************************DESCRIPCION**********************************
La función 'ft_isalnum' es una implementación de 'isalnum' en C. Esta función 
verifica si un carácter es alfanumérico, es decir, si es una letra 
(mayúscula o minúscula) o un dígito.

La función toma un argumento, un entero 'c', que se supone que es el valor 
ASCII de un carácter.

Dentro de la función, hay una declaración if que verifica si el valor de 'c' 
está en el rango de las letras minúsculas (de 'a' a 'z') o en el rango de las 
letras mayúsculas (de 'A' a 'Z'). Si 'c' está en alguno de estos rangos, 
significa que es una letra, por lo que la función devuelve 1.

Si 'c' no es una letra, la función luego verifica con una declaración else if 
si 'c' está en el rango de los dígitos (de '0' a '9'). Si 'c' está en este 
rango, significa que es un dígito, por lo que la función también devuelve 1.

Si 'c' no es ni una letra ni un dígito, la función devuelve 0. En resumen, 
'ft_isalnum' devuelve 1 si el carácter es alfanumérico y 0 si no lo es.
*******************************************************************************/
/*
#include <unistd.h>
#include <ctype.h>

int main()
{
	char a = 48 + ft_isalnum('.');
	write(1, &a, 1);
	a = 48 + isalnum('.');
	write(1, &a, 1);
}*/
