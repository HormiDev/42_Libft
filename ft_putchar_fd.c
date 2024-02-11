/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:08:18 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/11 22:08:16 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd != 0)
		write(fd, &c, 1);
}
/**********************************DESCRIPCION**********************************
La función 'ft_putchar_fd' escribe un carácter en un descriptor de archivo dado.

La función toma dos argumentos: un carácter 'c' y un descriptor de archivo 
'fd'. El objetivo es escribir el carácter 'c' en el descriptor de archivo 'fd'.

Primero, verifica si 'fd' no es 0. Si es 0, simplemente retorna, porque 0 es el 
descriptor de archivo para la entrada estándar, y no se puede escribir en él.

Si 'fd' no es 0, llama a la función 'write' con 'fd', la dirección de 'c' y 1 
como argumentos. 'write' es una función de sistema que escribe datos en un 
descriptor de archivo. En este caso, escribe el carácter 'c' en 'fd'. El 1 
indica que solo se debe escribir un carácter.

Cuando 'write' termina, la función retorna. No devuelve ningún valor porque su 
tipo de retorno es void. Esto significa que su objetivo principal es realizar 
una acción (escribir un carácter en un descriptor de archivo) en lugar de 
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
	ft_putchar_fd('A', fd);
	close(fd);
	return (0);
}
*/