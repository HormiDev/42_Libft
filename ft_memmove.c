/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:07:46 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 09:54:27 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*str;
	size_t			cont;

	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	cont = 0;
	if (!dst && !src)
		return (dst);
	if (dest < str)
	{
		while (len--)
		{
			dest[cont] = str[cont];
			cont++;
		}
	}
	else
	{
		while (len--)
		{
			dest[len] = str[len];
		}
	}
	return (dst);
}
/**********************************DESCRIPCION**********************************
La función 'ft_memmove' es una implementación personalizada de 'memmove' en C. 
Esta función copia los primeros 'len' bytes de la zona de memoria apuntada por 
'src' a la zona de memoria apuntada por 'dst'. A diferencia de 'memcpy', 
'memmove' maneja correctamente los casos en los que las zonas de memoria se 
superponen.

La función toma tres argumentos: dos punteros a zonas de memoria 'dst' y 'src', 
y un tamaño 'len'.

Dentro de la función, se inicializa una variable de contador 'cont' a 0 y se 
crean dos punteros a unsigned char 'dest' y 'str' que apuntan a las mismas 
zonas de memoria que 'dst' y 'src' respectivamente. Esto se hace para poder 
trabajar con la memoria como si fueran cadenas de caracteres.

Antes de comenzar a copiar, la función verifica si tanto 'dst' como 'src' son 
nulos. Si es así, la función devuelve 'dst' ya que no hay nada que copiar.

Luego, la función verifica si 'dest' es menor que 'str'. Si es así, significa 
que 'dst' está antes de 'src' en la memoria, por lo que es seguro copiar los 
bytes de izquierda a derecha. En este caso, la función entra en un bucle while 
que se ejecuta mientras 'len' sea mayor que 0, copiando el byte actual de 'str' 
a 'dest' y decrementando 'len'.

Si 'dest' no es menor que 'str', significa que 'dst' está después de 'src' en 
la memoria o que se superponen. En este caso, para evitar sobrescribir los 
datos en 'src' antes de que se copien, la función copia los bytes de derecha a 
izquierda. Entra en otro bucle while que se ejecuta mientras 'len' sea mayor 
que 0, copiando el byte actual de 'str' a 'dest' y decrementando 'len'.

Finalmente, la función devuelve un puntero a la zona de memoria 'dst'. Esto 
permite encadenar operaciones de copia, ya que el valor devuelto apunta al 
inicio de la zona de memoria a la que se copiaron los datos.

En resumen, 'ft_memmove' copia los primeros 'len' bytes de una zona de memoria 
a otra, manejando correctamente los casos en los que las zonas de memoria se 
superponen.
*******************************************************************************/
/*
#include <string.h>

int main () {
    const char src1[50] = "Hola";
    const char src2[50] = "Mundo cruel";
    char dest[50];

    strcpy(dest,"Heloooo!!");
    printf("Antes memcpy dest = %s\n", dest);
    printf("Posicion de src1 = %p, dest = %p\n", (void*)src1, (void*)dest);

    char* ret1 = memmove(dest, src1, strlen(src1)+1);
    printf("Despues memcpy dest = %s\n", dest);
    printf("Retorno de memmove = %s, Posicion de = %p\n", ret1, (void*)ret1);
    printf("Posicion de src1 = %p, dest = %p\n", (void*)src1, (void*)dest);

    printf("Posicion de src2 = %p, dest = %p\n", (void*)src2, (void*)dest);

    char* ret2 = ft_memmove(dest, src2, strlen(src2)+1);
    printf("Despues ft_memcpy dest = %s\n", dest);
    printf("Retorno de ft_memmove = %s, Posicion de = %p\n", ret2, (void*)ret2);
    printf("Posicion de src2 = %p, dest = %p\n", (void*)src2, (void*)dest);

    return 0;
}
*/
