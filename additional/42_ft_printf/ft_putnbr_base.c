/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:27:17 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/20 23:51:03 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long n, char *base, int lenbase)
{
	int		len;

	len = 0;
	if (lenbase == 0)
		lenbase = ft_strlen_int(base);
	if (n < 0)
	{
		n = n * -1;
		len = len + ft_putchar('-');
	}
	if (n > (lenbase - 1))
	{
		len = len + ft_putnbr_base (n / lenbase, base, lenbase);
		n = n % lenbase;
	}
	ft_putchar(base[n]);
	len++;
	return (len);
}
/**********************************DESCRIPCION**********************************
La función 'ft_putnbr_base' es una función auxiliar utilizada para imprimir un 
número en una base específica. Esta función toma un número largo 'n', una 
cadena de caracteres 'base' que representa la base en la que se debe imprimir 
el número, y un entero 'lenbase' que representa la longitud de la base.

La función comienza inicializando la variable 'len' a 0. Esta variable se 
utiliza para llevar la cuenta de la longitud de la cadena que se ha impreso.

Si 'lenbase' es 0, la función calcula la longitud de la base llamando a la 
función 'ft_strlen_int' con 'base' como argumento.

Si 'n' es menor que 0, la función convierte 'n' en positivo multiplicándolo 
por -1, imprime un carácter de guión '-' con la función 'ft_putchar', y suma la 
longitud de la cadena impresa (que siempre será 1 en este caso) a 'len'.

A continuación, si 'n' es mayor que 'lenbase' - 1, la función se llama a sí 
misma recursivamente con 'n' dividido por 'lenbase' como el nuevo número a 
imprimir. Esto es para manejar los dígitos del número que están a la izquierda 
del dígito actual. Luego, 'n' se actualiza al módulo de 'n' y 'lenbase', que es 
el dígito actual del número.

Después de eso, la función imprime el dígito actual del número llamando a 
'ft_putchar' con el carácter en la posición 'n' de la base. Luego, incrementa 
'len' en 1.

Finalmente, después de que se ha procesado todo el número, la función devuelve 
la longitud total de la cadena que se ha impreso.
*******************************************************************************/
/*
#include <fcntl.h>

int main()
{
	int number = -2147483648;

	printf(": len %d ", ft_putnbr_base(number, "0123456789", 0));

	return 0;
}
*/
