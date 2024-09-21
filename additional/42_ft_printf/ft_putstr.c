/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:59:51 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/20 23:51:16 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	len;

	len = 6;
	if (s != 0)
	{
		len = ft_strlen_int(s);
		write(1, s, len);
	}
	else
		write(1, "(null)", 6);
	return (len);
}
/**********************************DESCRIPCION**********************************
La función 'ft_putstr'es una función auxiliar utilizada para escribir una 
cadena de caracteres en la salida estándar (generalmente la terminal). Esta 
función toma una cadena de caracteres 's' como argumento.

La función comienza inicializando la variable 'len' a 6. Esta variable se 
utiliza para llevar la cuenta de la longitud de la cadena que se ha impreso.

A continuación, la función comprueba si 's' es distinto de 0, es decir, si no 
es un puntero nulo. Si 's' no es nulo, la función calcula la longitud de 's' 
llamando a la función 'ft_strlen_int' y la guarda en 'len'. Luego, utiliza la 
función de sistema 'write' para escribir la cadena en la salida estándar. El 
primer argumento de 'write' es el descriptor de archivo que representa la 
salida estándar, que es 1. El segundo argumento es la cadena que se va a 
escribir, y el tercer argumento es el número de bytes que se van a escribir, 
que en este caso es 'len'.

Si 's' es un puntero nulo, la función simplemente escribe la cadena "(null)" en 
la salida estándar y deja 'len' como 6.

Finalmente, la función devuelve 'len', que representa la cantidad de caracteres 
que se han escrito. Esto es útil para funciones que llaman a 'ft_putstr' y 
necesitan saber cuántos caracteres se han escrito, como la función 'ft_printf' 
en el código anterior.
*******************************************************************************/
