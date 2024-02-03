/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:04:42 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/04 00:04:36 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c = c - 32);
	return (c);
}
/**********************************DESCRIPCION**********************************
La función 'ft_toupper' es una implementación personalizada de 'toupper' en C. 
Esta función convierte un carácter en minúscula a mayúscula.

La función toma un argumento: un entero 'c' que representa un carácter. En 
ASCII, los caracteres se representan como números, por lo que un carácter puede 
ser tratado como un entero.

Dentro de la función, se verifica si 'c' está en el rango de los caracteres en 
minúscula en ASCII, que es de 97 (a) a 122 (z).

Si 'c' está en este rango, se le resta 32 para convertirlo a mayúscula. Esto se 
debe a que, en ASCII, la diferencia entre un carácter en minúscula y su 
correspondiente en mayúscula es 32. Luego, se devuelve el carácter convertido.

Si 'c' no está en el rango de los caracteres en minúscula, se devuelve sin 
cambios.

En resumen, 'ft_toupper' convierte un carácter en minúscula a mayúscula, y si 
el carácter ya está en mayúscula o no es una letra, lo devuelve sin cambios.
*******************************************************************************/
/*
#include <unistd.h>
#include <ctype.h>

int main(){
	char a = ft_toupper('b');
	write(1, &a, 1);
	a = toupper('b');
	write(1, &a, 1);
}*/
