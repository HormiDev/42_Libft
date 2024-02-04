/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:40:02 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/04 13:28:12 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*resultado;
	char	cchar;

	cchar = (char)c;
	resultado = 0;
	while (*str != 0)
	{
		if (*str == cchar)
			resultado = ((char *)str);
		str++;
	}
	if (cchar == '\0')
		return ((char *)str);
	return (resultado);
}
/**********************************DESCRIPCION**********************************
La función 'ft_strrchr' es una implementación personalizada de 'strrchr' en C. 
Esta función busca la última aparición de un carácter en una cadena.

La función toma dos argumentos: un puntero a una cadena de caracteres 'str' y 
un entero 'c'. El entero 'c' se convierte a un carácter 'cchar' para la 
comparación.

La variable 'resultado' se inicializa a 0 (o NULL). Esta variable se utilizará 
para almacenar la ubicación de la última aparición del carácter buscado.

Luego, la función entra en un bucle while que recorre la cadena de caracteres. 
Si el carácter actual de la cadena es igual al carácter buscado, la ubicación 
de ese carácter se almacena en 'resultado'. Esto significa que 'resultado' 
siempre contendrá la ubicación de la última aparición del carácter buscado.

Después del bucle, la función verifica si el carácter buscado es el carácter 
nulo ('\0'). Si es así, devuelve un puntero al final de la cadena. De lo c
ontrario, devuelve el valor de 'resultado', que es un puntero a la última 
aparición del carácter buscado en la cadena, o NULL si el carácter no se 
encontró en la cadena.
*******************************************************************************/
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[11] = "Hola mundo";
	char caracter = 'j';
	char *resultado = strrchr(str, caracter);
	printf("posicion : %ld\n", resultado - str);
	resultado = ft_strrchr(str, caracter);
	printf("posicion : %ld\n", resultado - str);
}
*/
