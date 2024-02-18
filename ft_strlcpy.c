/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:47:23 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 09:56:11 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	size_t	srclen;

	cont = 0;
	srclen = ft_strlen(src);
	if (dstsize > 0)
	{
		while (cont < srclen && cont < dstsize - 1)
		{
			dst[cont] = src[cont];
			cont++;
		}
		dst[cont] = 0;
	}
	return (srclen);
}
/**********************************DESCRIPCION**********************************
La función 'ft_strlcpy' es una implementación personalizada de la función 
'strlcpy' que se encuentra en algunas bibliotecas de C. Esta función se utiliza 
para copiar una cadena de origen a una cadena de destino de manera segura, 
evitando desbordamientos de búfer.

La función toma tres argumentos: una cadena de destino ('dst'), una cadena de 
origen ('src') y el tamaño de la cadena de destino ('dstsize').

Primero, inicializa dos variables de tamaño ('cont' y 'srclen'). 'cont' se usa 
como contador para el bucle de copia, y 'srclen' almacena la longitud de la 
cadena de origen, que se calcula utilizando la función 'ft_strlen'.

Luego, la función verifica si 'dstsize' es mayor que 0. Si no lo es, la función 
simplemente devuelve la longitud de la cadena de origen y no realiza ninguna 
copia. Esto se debe a que una cadena de destino de tamaño 0 no puede contener 
ningún carácter.

Si 'dstsize' es mayor que 0, la función entra en un bucle while. Este bucle 
copia caracteres de la cadena de origen a la cadena de destino uno por uno, 
siempre que el contador sea menor que 'srclen' y 'dstsize - 1'. El -1 es para 
dejar espacio para el carácter nulo que termina la cadena.

Después del bucle, la función agrega un carácter nulo al final de la cadena 
de destino para asegurarse de que esté correctamente terminada.

Finalmente, la función devuelve la longitud de la cadena de origen. Esto es 
útil porque permite a los llamadores de la función saber si la cadena de 
origen se truncó al copiarla a la cadena de destino.
*******************************************************************************/
/*
#include <string.h>

int main() {
    char src[50] = "aaa";
    char dst[5];
    char dst2[5];
    size_t ret1, ret2;

    ret1 = strlcpy(dst, src, 0);
    printf("strlcpy returned: %zu, Result: %s\n", ret1, dst);

    ret2 = ft_strlcpy(dst2, src, 0);
    printf("ft_strlcpy returned: %zu, Result: %s\n", ret2, dst2);

    return 0;
}
*/
