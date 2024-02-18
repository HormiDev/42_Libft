/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:01:56 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 09:54:40 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cont;
	unsigned char	*str;

	cont = 0;
	str = (unsigned char *)b;
	while (cont < len)
	{
		str[cont] = c;
		cont++;
	}
	return (b);
}
/**********************************DESCRIPCION**********************************
La función 'ft_memset' es una implementación personalizada de 'memset' en C. 
Esta función llena los primeros 'len' bytes de la zona de memoria apuntada por 
'b' con el byte 'c'.

La función toma tres argumentos: un puntero a una zona de memoria 'b', un 
entero 'c' que se convierte en un unsigned char y se copia en 'b', y un tamaño 
'len'.

Dentro de la función, se inicializa una variable de contador 'cont' a 0 y se 
crea un puntero a unsigned char 'str' que apunta a la misma zona de memoria que 
'b'. Esto se hace para poder trabajar con la memoria como si fuera una cadena 
de caracteres.

Luego, la función entra en un bucle while que se ejecuta mientras 'cont' sea 
menor que 'len'. Dentro del bucle, se copia el byte 'c' en la posición actual 
de 'str' y se incrementa 'cont'.

Finalmente, la función devuelve un puntero a la zona de memoria 'b'. Esto 
permite encadenar operaciones de llenado, ya que el valor devuelto apunta al 
inicio de la zona de memoria que se llenó.

En resumen, 'ft_memset' llena los primeros 'len' bytes de una zona de memoria 
con un byte específico y devuelve un puntero a esta zona de memoria.
*******************************************************************************/
/*
#include <string.h>

int main()
{
    char str[11] = "Hola mundo";
    printf("%s\n", str);
    memset(str, '$', 6);
    printf("%s\n", str);
	strcpy(str, "Hola mundo");
	printf("%s\n", str);
	ft_memset(str, '#', 7);
	printf("%s\n", str);
    return 0;
}*/
