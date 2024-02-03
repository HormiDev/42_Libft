/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:31:34 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/04 00:04:30 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c = c + 32);
	return (c);
}
/**********************************DESCRIPCION**********************************
La función 'ft_tolower' es una implementación personalizada de 'tolower' en C. 
Esta función convierte un carácter en mayúscula a minúscula.

La función toma un argumento: un entero 'c' que representa un carácter. En 
ASCII, los caracteres se representan como números, por lo que un carácter puede 
ser tratado como un entero.

Dentro de la función, se verifica si 'c' está en el rango de los caracteres en 
mayúscula en ASCII, que es de 65 (A) a 90 (Z).

Si 'c' está en este rango, se le suma 32 para convertirlo a minúscula. Esto se 
debe a que, en ASCII, la diferencia entre un carácter en mayúscula y su 
correspondiente en minúscula es 32. Luego, se devuelve el carácter convertido.

Si 'c' no está en el rango de los caracteres en mayúscula, se devuelve sin 
cambios.

En resumen, 'ft_tolower' convierte un carácter en mayúscula a minúscula, y si 
el carácter ya está en minúscula o no es una letra, lo devuelve sin cambios.
*******************************************************************************/
/*
#include <unistd.h>
#include <ctype.h>

int main(){
	char a = ft_tolower('A');
	write(1, &a, 1);
	a = tolower('A');
	write(1, &a, 1);
}
*/
