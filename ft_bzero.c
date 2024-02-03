/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:19:59 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/04 00:02:14 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	cont;
	char	*str;

	str = (char *)s;
	cont = 0;
	while (cont < n)
	{
		str[cont] = 0;
		cont++;
	}
}
/**********************************DESCRIPCION**********************************
La función 'ft_bzero'es una implementación personalizada de 'bzero' en C. Esta 
función se utiliza para establecer los primeros 'n' bytes de la zona de memoria 
apuntada por 's' a cero (bytes nulos).

La función toma dos argumentos: un puntero a una zona de memoria 's' y un 
tamaño 'n'.

Dentro de la función, se inicializa una variable de contador 'cont' a 0 y se 
crea un puntero a char 'str' que apunta a la misma zona de memoria que 's'. 
Esto se hace para poder trabajar con la memoria como si fuera una cadena de 
caracteres.

Luego, la función entra en un bucle while que se ejecuta mientras 'cont' sea 
menor que 'n'. Dentro del bucle, se establece el byte actual de la zona de 
memoria a 0 utilizando el operador de indexación [] en 'str'. Después de esto, 
se incrementa 'cont'.

En resumen, 'ft_bzero' establece los primeros 'n' bytes de la zona de memoria 
apuntada por 's' a cero.
*******************************************************************************/
/*
#include <strings.h>

int main() {
    char str[50] = "Hola Mundo!";
	char str2[50] = "Hola mundo!";
    printf("Antes de bzero: %s\n", str);

    bzero(str, sizeof(str));
    printf("Después de bzero: %s\n", str);

	printf("Antes de ft_bzero: %s\n", str2);
	ft_bzero(str2, sizeof(str2));
	printf("Despues de ft_bzero: %s\n", str2);

    return 0;
}*/
