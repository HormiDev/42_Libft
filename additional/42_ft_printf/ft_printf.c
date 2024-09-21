/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:53:20 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/20 21:14:15 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define HEXA "0123456789ABCDEF"
#define HEXA_MIN "0123456789abcdef"

static int	ft_conversion2(char conv, va_list arg)
{
	int	len;

	len = 0;
	if (conv == 'x')
		len = ft_putnbr_base(va_arg(arg, unsigned int), HEXA_MIN, 16);
	else if (conv == 'X')
		len = ft_putnbr_base(va_arg(arg, unsigned int), HEXA, 16);
	else if (conv == '%')
		len = ft_putchar('%');
	return (len);
}

static int	ft_conversion(char conv, va_list arg)
{
	int		len;
	void	*p;

	len = 0;
	if (conv == 'c')
		len = ft_putchar(va_arg(arg, int));
	else if (conv == 's')
		len = ft_putstr(va_arg(arg, char *));
	else if (conv == 'p')
	{
		p = va_arg(arg, void *);
		if (p == 0)
			len = ft_putstr("(nil)");
		else
			len = ft_printf("0x")
				+ft_putnbr_base_p((unsigned long)p, HEXA_MIN, 16);
	}
	else if (conv == 'd' || conv == 'i')
		len = ft_putnbr_base(va_arg(arg, int), "0123456789", 10);
	else if (conv == 'u')
		len = ft_putnbr_base(va_arg(arg, unsigned int), "0123456789", 10);
	else
		len = ft_conversion2(conv, arg);
	return (len);
}
/**********************************DESCRIPCION**********************************
La función 'ft_conversion' es una función auxiliar utilizada por 'ft_printf' 
para manejar las conversiones especificadas en la cadena de formato. Esta 
función toma un carácter de conversión y una lista de argumentos variables, y 
devuelve la longitud de la cadena que se ha impreso.

La función comienza inicializando la variable 'len' a 0. Esta variable se 
utiliza para llevar la cuenta de la longitud de la cadena que se ha impreso.

A continuación, la función entra en una serie de declaraciones if y else if 
para verificar qué carácter de conversión se ha proporcionado. Si el carácter 
de conversión es 'c', la función llama a 'ft_putchar' con el siguiente 
argumento en la lista de argumentos variables (que se espera que sea un int) y 
suma la longitud de la cadena impresa a 'len'.

Si el carácter de conversión es 's', 'p', 'd' o 'i', 'u', 'x', 'X', la función 
realiza una serie de operaciones similares, pero llamando a diferentes 
funciones de impresión y pasando diferentes tipos de argumentos. En el caso de 
'p', 'x' y 'X', también se pasa una cadena de caracteres que representa la base 
en la que se debe imprimir el número.

Si el carácter de conversión es '%', la función simplemente imprime un carácter 
de porcentaje y suma 1 a 'len'.

Finalmente, después de que se ha procesado el carácter de conversión, la 
función devuelve la longitud total de la cadena que se ha impreso.
*******************************************************************************/

int	ft_printf(char const *str, ...)
{
	int		cont;
	int		len;
	va_list	varg;

	va_start(varg, str);
	cont = 0;
	len = 0;
	while (str[cont] != 0)
	{
		if (str[cont] == '%')
		{
			cont++;
			len = len + ft_conversion(str[cont++], varg);
		}
		else
		{
			len = len + ft_putchar(str[cont++]);
		}
	}
	va_end(varg);
	return (len);
}
/**********************************DESCRIPCION**********************************
La función 'ft_printf' es una implementación 'printf' de la biblioteca de C. 
Esta función toma una cadena de formato y un número variable de argumentos, y 
devuelve la longitud de la cadena que se ha impreso.

La función comienza inicializando una lista de argumentos variables con la 
macro 'va_start'. Luego, inicializa varias variables a 0: 'cont' para contar 
los caracteres en la cadena de formato, 'narg' para contar los argumentos 
(aunque no se usa en el código proporcionado), y 'len' para llevar la cuenta de 
la longitud de la cadena que se ha impreso.

A continuación, la función entra en un bucle que se ejecuta hasta que se 
encuentra un carácter nulo en la cadena de formato. Dentro del bucle, la 
función comprueba si el carácter actual es un signo de porcentaje '%'. Si es 
así, incrementa 'cont' para pasar al siguiente carácter y llama a la función 
'ft_conversion' con el carácter actual y la lista de argumentos variables. La 
función 'ft_conversion' se encarga de manejar la conversión especificada por el 
carácter actual y devuelve la longitud de la cadena que ha impreso. Esta 
longitud se suma a 'len'.

Si el carácter actual no es un signo de porcentaje '%', la función simplemente 
imprime el carácter con la función 'ft_putchar' y suma la longitud de la cadena 
impresa (que siempre será 1 en este caso) a 'len'.

Finalmente, después de que se ha procesado toda la cadena de formato, la 
función limpia la lista de argumentos variables con la macro 'va_end' y 
devuelve la longitud total de la cadena que se ha impreso.
*******************************************************************************/
/*
#include <stdio.h>
#include <limits.h>

int main() {
	char *puntero = "Hola mundo";
	
    printf("Hola mundo\n");
	ft_printf("Hola mundo\n");

	printf("| len %d\n", printf("Hola mundo"));
	ft_printf("| len %d\n", ft_printf("Hola mundo"));

	printf("| len %d\n", printf("prueba char %c %c %c %c", 'H', 'o', 'l', 'a'));
	ft_printf("| len %d\n", ft_printf
	("prueba char %c %c %c %c", 'H', 'o', 'l', 'a'));

	printf("| len %d\n", printf("prueba string %s %s", "Hola", "mundo"));
	ft_printf("| len %d\n", ft_printf("prueba string %s %s", "Hola", "mundo"));
	
	printf("| len %d\n", printf("prueba puntero %p", puntero));
	ft_printf("| len %d\n", ft_printf("prueba puntero %p", puntero));

	printf("| len %d\n", printf("prueba int %%d %d %d %d", 10, 11, 12));
	ft_printf("| len %d\n", ft_printf("prueba int %%d %d %d %d", 10, 11, 12));

	printf("| len %d\n", printf("prueba int %%i %i %i %i", 10, 11, 12));
	ft_printf("| len %d\n", ft_printf("prueba int %%i %i %i %i", 10, 11, 12));

	printf("| len %d\n", printf("prueba int %%u %u %u %u", 10, 11, 12));
	ft_printf("| len %d\n", ft_printf("prueba int %%u %u %u %u", 10, 11, 12));

	printf("| len %d\n", printf("prueba hexadecimal %x", 42424242));
	ft_printf("| len %d\n", ft_printf("prueba hexadecimal %x", 42424242));

	printf("| len %d\n", printf("prueba HEXADECIMAL %X", 42424242));
	ft_printf("| len %d\n", ft_printf("prueba HEXADECIMAL %X", 42424242));

	printf("| len %d\n", printf("prueba punteros %p", (void *)-14523));
	ft_printf("| len %d\n", ft_printf("prueba punteros %p", (void *)-14523));

	//printf("Cadena:%% % %s\n", "cadena");
    //ft_printf("Puntero:%% % %s\n", "cadena");

	printf("| len %d\n", printf
	("prueba punteros nulos %p %p", (void *)0, (void *)0));
	ft_printf("| len %d\n", ft_printf
	("prueba punteros nulos %p %p", (void *)0, (void *)0));
    
    return 0;
}
*/