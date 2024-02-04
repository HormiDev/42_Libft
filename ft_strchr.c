/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:49:32 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/04 13:36:45 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	cchar;

	cchar = (char)c;
	while (*str != '\0')
	{
		if (*str == cchar)
			return ((char *)str);
		str++;
	}
	if (cchar == '\0')
		return ((char *)str);
	return (0);
}

/**********************************DESCRIPCION**********************************
La función 'ft_strchr' es una implementación personalizada de 'strchr'. Esta 
función busca la primera aparición de un carácter específico en una cadena de 
caracteres.

La función toma dos argumentos: un puntero a una cadena de caracteres 'str' y 
un entero 'c'. El entero 'c' se convierte a un carácter 'cchar' antes de 
comenzar la búsqueda.

La función comienza a buscar el carácter 'cchar' desde el principio de la 
cadena 'str'. Utiliza un bucle 'while' para iterar a través de la cadena. En 
cada iteración, compara el carácter actual con 'cchar'. Si encuentra una 
coincidencia, devuelve un puntero al carácter en la cadena 'str'.

Si la función llega al final de la cadena sin encontrar una coincidencia, 
comprueba si 'cchar' es el carácter nulo ('\0'). Si es así, devuelve un 
puntero al final de la cadena. Esto se debe a que en C, las cadenas de 
caracteres siempre terminan con un carácter nulo, por lo que técnicamente, 
el carácter nulo siempre está en la cadena.

Si 'cchar' no es el carácter nulo y no se encontró en la cadena, la función 
devuelve un puntero nulo (0), indicando que no se encontró el carácter buscado.
*******************************************************************************/

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[11] = "Hola mundo";
	char caracter = 'o';
	char *resultado = strchr(str, caracter);
	printf("posicion : %ld\n", resultado - str);
	resultado = ft_strchr(str, caracter);
	printf("posicion : %ld\n", resultado - str);
}
*/
