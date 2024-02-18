/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:17:18 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 09:54:22 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cont;
	char	*dest;
	char	*str;

	if (dst == 0 && src == 0)
		return (0);
	dest = (char *)dst;
	str = (char *)src;
	cont = 0;
	while (cont < n)
	{
		dest[cont] = str[cont];
		cont++;
	}
	return (dst);
}
/**********************************DESCRIPCION**********************************
La función 'ft_memcpy' es una implementación personalizada de 'memcpy' en C. 
Esta función copia los primeros 'n' bytes de la zona de memoria apuntada por 
'src' a la zona de memoria apuntada por 'dst'.

La función toma tres argumentos: dos punteros a zonas de memoria 'dst' y 'src', 
y un tamaño 'n'.

Dentro de la función, se inicializa una variable de contador 'cont' a 0 y se 
crean dos punteros a char 'dest' y 'str' que apuntan a las mismas zonas de 
memoria que 'dst' y 'src' respectivamente. Esto se hace para poder trabajar con 
la memoria como si fueran cadenas de caracteres.

Antes de comenzar a copiar, la función verifica si tanto 'dst' como 'src' son 
nulos. Si es así, la función devuelve 0 ya que no hay nada que copiar.

Luego, la función entra en un bucle while que se ejecuta mientras 'cont' sea 
menor que 'n'. Dentro del bucle, se copia el byte actual de 'str' a 'dest' y se 
incrementa 'cont'.

Finalmente, la función devuelve un puntero a la zona de memoria 'dst'. Esto 
permite encadenar operaciones de copia, ya que el valor devuelto apunta al 
inicio de la zona de memoria a la que se copiaron los datos.

En resumen, 'ft_memcpy' copia los primeros 'n' bytes de una zona de memoria a 
otra, y devuelve un puntero a la zona de memoria de destino.
*******************************************************************************/
/*
#include <string.h>

int main () {
    const char src[50] = "Holaaaaa!!";
	const char src2[50] = "Mundo cruellll";
    char dest[50];

    strcpy(dest,"Heloooo!!");
    printf("Antes memcpy dest = %s\n", dest);

    memcpy(dest, src, strlen(src)+1);
    printf("Despues memcpy dest = %s\n", dest);

	ft_memcpy(dest, src2, strlen(src2)+1);
	printf("Despues ft_memcpy dest = %s\n", dest);
	

    return(0);
}*/
