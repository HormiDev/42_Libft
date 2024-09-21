/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:10:30 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/03/06 13:27:03 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
/**********************************DESCRIPCION**********************************
La función 'ft_putchar' es una función auxiliar utilizada para escribir un solo 
carácter en la salida estándar (generalmente la terminal). Esta función toma un 
carácter 'c' como argumento.

Dentro de la función, se utiliza la función de sistema 'write' para escribir el 
carácter en la salida estándar. El primer argumento de 'write' es el descriptor 
de archivo que representa la salida estándar, que es 1. El segundo argumento es 
una referencia al carácter que se va a escribir, y el tercer argumento es el 
número de bytes que se van a escribir, que en este caso es 1 porque sólo se 
está escribiendo un carácter.

Finalmente, la función devuelve 1, que representa la cantidad de caracteres que 
se han escrito. Esto es útil para funciones que llaman a 'ft_putchar' y 
necesitan saber cuántos caracteres se han escrito, como la función 'ft_printf' 
en el código anterior.
*******************************************************************************/