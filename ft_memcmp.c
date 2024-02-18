/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:52:21 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 09:54:19 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cont;
	unsigned char	*str1;
	unsigned char	*str2;

	cont = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (cont < n)
	{
		if (str1[cont] != str2[cont])
			return (str1[cont] - str2[cont]);
		cont++;
	}
	return (0);
}
/**********************************DESCRIPCION**********************************
La función 'ft_memcmp' es una implementación personalizada de 'memcmp' en C. 
Esta función compara los primeros 'n' bytes de dos zonas de memoria.

La función toma tres argumentos: dos punteros a zonas de memoria 's1' y 's2', y 
un tamaño 'n'.

Dentro de la función, se inicializa una variable de contador 'cont' a 0 y se 
crean dos punteros a unsigned char 'str1' y 'str2' que apuntan a las mismas 
zonas de memoria que 's1' y 's2' respectivamente. Esto se hace para poder 
trabajar con la memoria como si fueran cadenas de caracteres.

Luego, la función entra en un bucle while que se ejecuta mientras 'cont' sea 
menor que 'n'. Dentro del bucle, hay una declaración if que verifica si el byte 
actual en 'str1' es diferente del byte actual en 'str2'. Si son diferentes, la 
función devuelve la diferencia entre los dos bytes.

Si los bytes son iguales, se incrementa 'cont' y el bucle continúa con el 
siguiente byte.

Si el bucle termina sin encontrar diferencias entre los bytes de las zonas de 
memoria, la función devuelve 0, lo que indica que las zonas de memoria son 
iguales hasta los primeros 'n' bytes.
*******************************************************************************/
/*
#include <string.h>

int main() {
    char s1[] = "Hola Mundo";
    char s2[] = "Hola mundo";

    int resultado = memcmp(s1, s2, sizeof(s1));
    printf("memcmp: %d\n", resultado);

	resultado = ft_memcmp(s1, s2, sizeof(s1));
	printf("ft_memcmp: %d\n", resultado);

    return 0;
}*/