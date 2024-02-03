/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:52:07 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/04 00:02:07 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	cont;
	int	mult;

	num = 0;
	cont = 0;
	mult = 1;
	while (str[cont] == ' ' || (str[cont] >= '\t' && str[cont] <= '\r'))
		cont++;
	if (str[cont] == '-')
		mult = -1;
	if (str[cont] == '-' || str[cont] == '+')
		cont++;
	while (ft_isdigit(str[cont]))
	{
		num = num * 10 + (str[cont] - 48);
		cont++;
	}
	return (num * mult);
}
/**********************************DESCRIPCION**********************************
La función 'ft_atoi' es una implementación personalizada de 'atoi' en C. Esta 
función convierte una cadena de caracteres que representa un número entero en 
su equivalente numérico.

La función toma un argumento, un puntero a una cadena de caracteres 'str'.

Dentro de la función, se inicializan tres variables: 'num' para almacenar el 
número resultante, 'cont' para usar como contador en los bucles, y 'mult' para 
almacenar el signo del número (1 para positivo, -1 para negativo).

Primero, la función entra en un bucle while para saltar cualquier espacio en 
blanco o caracteres de control al inicio de la cadena.

Luego, la función verifica si el carácter actual es un signo negativo ('-'). Si 
es así, se establece 'mult' a -1 para indicar que el número es negativo.

Después de esto, la función verifica si el carácter actual es un signo negativo 
o positivo. Si es así, se incrementa 'cont' para pasar al siguiente carácter.

A continuación, la función entra en otro bucle while que se ejecuta mientras el 
carácter actual sea un dígito numérico. Dentro del bucle, se multiplica 'num' 
por 10 y se suma el valor numérico del dígito actual (obtenido restando 48, 
que es el valor ASCII de '0', al valor ASCII del dígito). Luego, se incrementa 
'cont'.

Finalmente, la función devuelve el número resultante multiplicado por 'mult', 
lo que asegura que el número tenga el signo correcto.

En resumen, 'ft_atoi' convierte una cadena de caracteres que representa un 
número entero en su equivalente numérico, teniendo en cuenta los espacios en 
blanco iniciales y el signo del número.
*******************************************************************************/
/*
#include <stdlib.h>

int main() {
    // Definimos cuatro cadenas
    char *str1 = "100hola";
    char *str2 = "--200-";
    char *str3 = "-2147483648";
    char *str4 = "2147483647";

    // Convertimos las cadenas a enteros usando atoi()
    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);
    int num4 = atoi(str4);
    printf("atoi: %d, %d, %d, y %d\n", num1, num2, num3, num4);

	// Convertimos las cadenas a enteros usando ft_atoi()
    num1 = ft_atoi(str1);
    num2 = ft_atoi(str2);
    num3 = ft_atoi(str3);
    num4 = ft_atoi(str4);
    printf("ft_atoi: %d, %d, %d, y %d\n", num1, num2, num3, num4);

    return 0;
}
*/