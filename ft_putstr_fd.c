/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 22:11:22 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/11 22:27:26 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd != 0 && s != 0)
	{
		write(fd, s, ft_strlen(s));
	}
}
/**********************************DESCRIPCION**********************************
La función 'ft_putstr_fd' escribe una cadena de caracteres en un descriptor de 
archivo dado.

La función toma dos argumentos: una cadena de caracteres 's' y un descriptor de 
archivo 'fd'. El objetivo es escribir la cadena 's' en el descriptor de archivo 
'fd'.

Primero, verifica si 'fd' no es 0 y 's' no es 0. Si alguno de ellos es 0, 
simplemente retorna. 'fd' no puede ser 0 porque 0 es el descriptor de archivo 
para la entrada estándar, y no se puede escribir en él. 's' no puede ser 0 
porque no se puede escribir una cadena nula.

Si 'fd' no es 0 y 's' no es 0, llama a la función 'write' con 'fd', 's' y el 
resultado de 'ft_strlen(s)' como argumentos. 'write' es una función de sistema 
que escribe datos en un descriptor de archivo. En este caso, escribe la cadena 
's' en 'fd'. 'ft_strlen(s)' calcula la longitud de 's', por lo que 'write' sabe 
cuántos caracteres escribir.

Cuando 'write' termina, la función retorna. No devuelve ningún valor porque su 
tipo de retorno es void. Esto significa que su objetivo principal es realizar 
una acción (escribir una cadena en un descriptor de archivo) en lugar de 
producir un nuevo valor.
*******************************************************************************/
/*
#include <fcntl.h>

int main()
{
	int fd;
	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		write(2, "Error al abrir el archivo\n", 25);
		return (1);
	}
	ft_putstr_fd("Hola, mundo!", fd);
	close(fd);
	return (0);
}
*/