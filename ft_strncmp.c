/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:51:01 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 09:56:24 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		if (s1[cont] != s2[cont])
			return ((unsigned char)s1[cont] - (unsigned char)s2[cont]);
		else if (s1[cont] == 0)
			return (0);
		cont++;
	}
	return (0);
}
/**********************************DESCRIPCION**********************************
La función 'ft_strncmp' es una implementación personalizada de 'strncmp' en C. 
Esta función compara hasta los primeros 'n' caracteres de dos cadenas de 
caracteres.

La función toma tres argumentos: dos punteros a cadenas de caracteres 's1' y 
's2', y un tamaño 'n'.

Dentro de la función, se inicializa una variable de contador 'cont' a 0. Luego, 
la función entra en un bucle while que se ejecuta mientras 'cont' sea menor 
que 'n'.

Dentro del bucle, hay una declaración if que verifica si el carácter actual en 
's1' es diferente del carácter actual en 's2'. Si son diferentes, la función 
devuelve la diferencia entre los valores ASCII de los dos caracteres. Para 
asegurarse de que la diferencia sea un valor positivo si 's1' es mayor que 
's2' y un valor negativo si 's1' es menor que 's2', los caracteres se 
convierten a unsigned char antes de la resta.

Si los caracteres son iguales, la función luego verifica con una declaración 
else if si el carácter actual en 's1' es el carácter nulo ('\0'). Si es así, 
significa que las cadenas son iguales hasta este punto, por lo que la función 
devuelve 0.

Si ninguno de los casos anteriores se cumple, se incrementa 'cont' y el bucle 
continúa con el siguiente carácter.

Si el bucle termina sin encontrar diferencias entre los caracteres de las 
cadenas, la función devuelve 0, lo que indica que las cadenas son iguales 
hasta los primeros 'n' caracteres.
*******************************************************************************/
/*
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;
   strcpy(str1, "abcdef");
   strcpy(str2, "ABCDEF");
   ret = strncmp(str1, str2, 4);
   printf("%d\n", ret);
   ret = ft_strncmp(str1, str2, 4);
   printf("%d\n", ret);

   return(0);
}*/
