/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 23:55:19 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/12 01:02:58 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd != 0)
	{
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{
			if (n < 0)
			{
				n = n * -1;
				ft_putchar_fd('-', fd);
			}
			if (n > 9)
			{
				ft_putnbr_fd (n / 10, fd);
				n = n % 10;
			}
			ft_putchar_fd(n + '0', fd);
		}
	}
}
/**********************************DESCRIPCION**********************************
La función 'ft_putnbr_fd' escribe un número entero en un descriptor de archivo 
dado.

La función toma dos argumentos: un entero 'n' y un descriptor de archivo 'fd'. 
El objetivo es escribir el número 'n' en el descriptor de archivo 'fd'.

Primero, verifica si 'fd' no es 0. Si es 0, simplemente retorna, porque 0 es el 
descriptor de archivo para la entrada estándar, y no se puede escribir en él.

Si 'fd' no es 0, verifica si 'n' es -2147483648, que es el valor más pequeño 
que puede tener un entero en C. Si es así, escribe la cadena "-2147483648" en 
'fd' y retorna.

Si 'n' no es -2147483648, verifica si 'n' es menor que 0. Si es así, multiplica 
'n' por -1 para hacerlo positivo y escribe el carácter '-' en 'fd'.

Luego, verifica si 'n' es mayor que 9. Si es así, llama a 'ft_putnbr_fd' con 
'n' dividido por 10 y 'fd' como argumentos. Esto escribe todos los dígitos de 
'n' excepto el último. Luego, calcula el módulo de 'n' por 10 para obtener el 
último dígito de 'n'.

Finalmente, llama a 'ft_putchar_fd' con 'n' más '0' y 'fd' como argumentos. 
Esto convierte el último dígito de 'n' en un carácter y lo escribe en 'fd'.

Cuando todas las llamadas a 'write' y 'ft_putchar_fd' terminan, la función 
retorna. No devuelve ningún valor porque su tipo de retorno es void. Esto 
significa que su objetivo principal es realizar una acción (escribir un número 
en un descriptor de archivo) en lugar de producir un nuevo valor.
*******************************************************************************/
/*
#include <fcntl.h>

int main()
{
	int number = 12345;
	int fd;
	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);

	ft_putnbr_fd(number, fd);

	return 0;
}
*/