/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 23:44:13 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/11 23:53:44 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd != 0 && s != 0)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
/**********************************DESCRIPCION**********************************
La función 'ft_putendl_fd' escribe una cadena de caracteres seguida de un salto 
de línea en un descriptor de archivo dado.

La función toma dos argumentos: una cadena de caracteres 's' y un descriptor de 
archivo 'fd'. El objetivo es escribir la cadena 's' seguida de un salto de 
línea en el descriptor de archivo 'fd'.

Primero, verifica si 'fd' no es 0 y 's' no es 0. Si alguno de ellos es 0, 
simplemente retorna. 'fd' no puede ser 0 porque 0 es el descriptor de archivo 
para la entrada estándar, y no se puede escribir en él. 's' no puede ser 0 
porque no se puede escribir una cadena nula.

Si 'fd' no es 0 y 's' no es 0, llama a la función 'write' dos veces. La primera 
llamada a 'write' escribe la cadena 's' en 'fd'. Para ello, pasa 'fd', 's' y el 
resultado de 'ft_strlen(s)' como argumentos. 'ft_strlen(s)' calcula la longitud 
de 's', por lo que 'write' sabe cuántos caracteres escribir.

La segunda llamada a 'write' escribe un salto de línea en 'fd'. Para ello, pasa 
'fd', una cadena que contiene un salto de línea y 1 como argumentos. El 1 
indica que solo se debe escribir un carácter.

Cuando las dos llamadas a 'write' terminan, la función retorna. No devuelve 
ningún valor porque su tipo de retorno es void. Esto significa que su objetivo 
principal es realizar una acción (escribir una cadena y un salto de línea en un 
descriptor de archivo) en lugar de producir un nuevo valor.
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
	ft_putendl_fd("Hola, mundo!", fd);
	close(fd);
	return (0);
}
*/