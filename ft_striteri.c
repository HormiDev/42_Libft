/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 19:21:40 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/11 20:18:42 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len;

	if (s != 0 && f != 0)
	{
		len = ft_strlen(s);
		s[len] = 0;
		while (len-- > 0)
		{
			f(len, &s[len]);
		}
	}
}
/**********************************DESCRIPCION**********************************
La función 'ft_striteri' aplica una función a cada carácter de una cadena de 
caracteres.

La función toma dos argumentos: una cadena de caracteres 's' y una función 'f'. 
La función 'f' toma dos argumentos: un entero sin signo y un puntero a un 
carácter. El objetivo es aplicar 'f' a cada carácter de 's'.

Primero, verifica si 's' o 'f' son 0. Si es así, simplemente retorna, porque no 
puede proceder sin una cadena o una función.

Luego, utiliza la función 'ft_strlen' para calcular la longitud de 's' y 
almacena el resultado en 'len'.

Después, establece el último carácter de 's' en 0.

Luego, entra en un bucle while que continúa mientras 'len' sea mayor que 0. 
Dentro del bucle, aplica 'f' al carácter en la posición 'len' de 's'. Aquí, se 
pasa la dirección del carácter, lo que significa que 'f' puede modificar el 
carácter en 's'. Luego, decrementa 'len' en uno.

Cuando el bucle termina, la función retorna. No devuelve ningún valor porque su 
tipo de retorno es void. Esto significa que su objetivo principal es modificar 
's' en lugar de producir un nuevo valor.
*******************************************************************************/
/*
void incrementchar(unsigned int num, char *a)
{
	*a = *a + num;
}

int main()
{
	char str[] = "01234";
	printf("Antes: %s\n", str);
	ft_striteri(str, incrementchar);
	printf("Después: %s\n", str);
	return 0;
}
*/