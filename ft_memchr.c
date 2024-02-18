/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:32:50 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 09:54:15 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			cont;

	str = (unsigned char *)s;
	cont = 0;
	while (cont < n)
	{
		if (str[cont] == (unsigned char)c)
			return (str + cont);
		cont++;
	}
	return (0);
}
/**********************************DESCRIPCION**********************************
La función 'ft_memchr' es una implementación personalizada de 'memchr' en C. 
Esta función busca un carácter específico en los primeros 'n' bytes de la zona 
de memoria apuntada por 's'.

La función toma tres argumentos: un puntero a una zona de memoria 's', un 
entero 'c' que representa el carácter a buscar, y un tamaño 'n'.

Dentro de la función, se inicializa una variable de contador 'cont' a 0 y se 
crea un puntero a unsigned char 'str' que apunta a la misma zona de memoria que 
's'. Esto se hace para poder trabajar con la memoria como si fuera una cadena 
de caracteres.

Luego, la función entra en un bucle while que se ejecuta mientras 'cont' sea 
menor que 'n'. Dentro del bucle, hay una declaración if que verifica si el 
byte actual en la zona de memoria es igual a 'c'. Si es así, la función 
devuelve un puntero a este byte.

Si el byte actual no es igual a 'c', se incrementa 'cont' y el bucle continúa 
con el siguiente byte.

Si el bucle termina sin encontrar 'c' en la zona de memoria, la función 
devuelve 0, lo que indica que 'c' no se encontró en los primeros 'n' bytes de 
la zona de memoria.
*******************************************************************************/
/*
#include <string.h>

int main() {
    const char str[] = "Erase una vez...";
    const char str2[] = "Erase una vez...";
    const char ch = 'u';
    char *ret;

    ret = memchr(str, ch, strlen(str));
    printf("Con memchr el caracter |%c| esta en - |%s|\n", ch, ret);

    ret = ft_memchr(str2, ch, strlen(str));
    printf("Con ft_memchr el caracter |%c| esta en - |%s|\n", ch, ret);

    return 0;
}*/
