/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:59:25 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 09:56:06 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	cont;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	cont = 0;
	if (dstsize == 0)
		return (srclen);
	while (dstlen + cont < dstsize - 1 && src[cont] != '\0')
	{
		dst[dstlen + cont] = src[cont];
		cont++;
	}
	dst[dstlen + cont] = '\0';
	if (dstsize < dstlen)
		return (dstsize + srclen);
	return (dstlen + srclen);
}
/**********************************DESCRIPCION**********************************
La función 'ft_strlcat' es una implementación personalizada de 'strlcat' en C. 
Esta función concatena la cadena 'src' a la cadena 'dst' de manera segura, 
asegurándose de que 'dst' no se desborde y siempre esté terminada por '\0'.

La función toma tres argumentos: dos punteros a cadenas 'dst' y 'src', y un 
tamaño 'dstsize' que es el tamaño total de la cadena 'dst'.

Dentro de la función, se calculan las longitudes de 'dst' y 'src' usando la 
función 'ft_strlen' y se inicializa una variable de contador 'cont' a 0.

Si 'dstsize' es 0, la función devuelve la longitud de 'src', ya que no hay 
espacio en 'dst' para copiar ningún carácter de 'src'.

Luego, la función entra en un bucle while que se ejecuta mientras la longitud 
actual de 'dst' más 'cont' sea menor que 'dstsize' menos 1 y el carácter actual 
de 'src' no sea '\0'. Dentro del bucle, se copia el carácter actual de 'src' a 
la posición actual de 'dst' y se incrementa 'cont'.

Después del bucle, se añade un carácter nulo al final de 'dst' para asegurarse 
de que está terminada por '\0'.

Finalmente, la función devuelve la longitud total de la cadena que se habría 
creado si 'dst' hubiera sido lo suficientemente grande. Si 'dstsize' es menor 
que la longitud de 'dst', esto es 'dstsize' más la longitud de 'src'. De lo 
contrario, es la longitud de 'dst' más la longitud de 'src'.

En resumen, 'ft_strlcat' concatena de manera segura una cadena a otra, 
asegurándose de que la cadena de destino no se desborde y siempre esté 
terminada por '\0', y devuelve la longitud total de la cadena que se habría 
creado si la cadena de destino hubiera sido lo suficientemente grande.
*******************************************************************************/
/*
#include <string.h>

int main() 
{
char dst[8] = "Hola, ";
char src[50] = "Mundo!";
size_t ret;

printf("dst antes de llamar a strlcat: %s\n", dst);
printf("Posición de memoria de dst antes de strlcat: %p\n", (void *)dst);
ret = strlcat(dst, src, sizeof(dst));
printf("Return value of strlcat: %zu\n", ret);
printf("%s\n", dst);
printf("Posición de memoria de dst después de strlcat: %p\n", (void *)dst);

strcpy(dst, "Hola, "); // Reestablece dst a "Hola, "
printf("dst antes de llamar a ft_strlcat: %s\n", dst);
printf("Posición de memoria de dst antes de ft_strlcat: %p\n", (void *)dst);
ret = ft_strlcat(dst, src, sizeof(dst)); // Usa src en lugar de src2
printf("Return value of ft_strlcat: %zu\n", ret);
printf("%s\n", dst);
printf("Posición de memoria de dst después de ft_strlcat: %p\n", (void *)dst);

return 0;
}
*/