/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:44:25 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 07:21:25 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n);

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_intlen(n);
	str = ft_calloc((len + 1), sizeof(char));
	if (str == 0)
		return (NULL);
	str[len] = 0;
	if (n >= 0)
		n = n * -1;
	else
		str[0] = '-';
	while ((len > 0 && str[0] == 0) || (len > 1 && str[0] == '-'))
	{
		str[len - 1] = ((n % 10) * -1 + '0');
		n = n / 10;
		len--;
	}
	return (str);
}
/**********************************DESCRIPCION**********************************
La función 'ft_itoa' convierte un número entero en una cadena de caracteres 
(string).

La función toma un número entero 'n' como argumento. Primero, utiliza la 
función 'ft_intlen' para calcular la longitud de 'n' (es decir, cuántos dígitos 
tiene) y almacena el resultado en 'len'.

Luego, utiliza la función 'ft_calloc' para asignar memoria para una nueva 
cadena 'str'. El tamaño de la cadena es 'len' más uno, para tener en cuenta el 
carácter nulo al final de la cadena y asegurar que el primer caracter se 
inicialice como nulo. Si 'ft_calloc' no puede asignar la memoria (es decir, 
devuelve 0), la función 'ft_itoa' devuelve NULL.

Después de eso, establece el último carácter de 'str' en el carácter nulo (0). 
Si 'n' es un número positivo, lo convierte en negativo multiplicándolo por -1. 
Si 'n' es un número negativo, establece el primer carácter de 'str' en '-'.

Luego, entra en un bucle while que continúa mientras 'len' sea mayor que 0 y el 
primer carácter de 'str' sea 0, o mientras 'len' sea mayor que 1 y el primer 
carácter de 'str' sea '-'. Dentro del bucle, convierte el último dígito de 'n' 
en un carácter, lo añade al final de 'str', y luego divide 'n' por 10 para 
eliminar el último dígito. También decrementa 'len' en uno.

Cuando el bucle termina, la función devuelve 'str', que es la representación 
de cadena del número entero 'n'.
*******************************************************************************/

static int	ft_intlen(int n)
{
	int	len;
	int	mult;

	if (n == -2147483648)
		return (11);
	len = 1;
	mult = 1;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n / mult > 9)
	{
		len++;
		mult = mult * 10;
	}
	return (len);
}
/**********************************DESCRIPCION**********************************
La función 'ft_intlen' está diseñada para calcular la longitud de un número 
entero, es decir, cuántos dígitos tiene el número.

La función toma un número entero 'n' como argumento. Primero, comprueba si 'n' 
es igual a -2147483648, que es el valor más pequeño que puede tener un entero 
de 32 bits. Si es así, devuelve 11 porque este número tiene 11 dígitos 
(incluyendo el signo negativo) y no se puede convertir a positivo siendo int.

Luego, inicializa dos variables, 'len' y 'mult', a 1. 'len' se usa para 
almacenar la longitud del número y 'mult' se usa como multiplicador para 
dividir el número.

Si 'n' es un número negativo, incrementa 'len' en uno (para tener en cuenta 
el signo negativo) y convierte 'n' a positivo multiplicándolo por -1.

Finalmente, entra en un bucle while que continúa mientras 'n' dividido por 
'mult' sea mayor que 9. Dentro del bucle, incrementa 'len' en uno y multiplica 
'mult' por 10. Esto efectivamente divide el número en dígitos, contando cuántos 
dígitos hay en total.

Cuando el bucle termina, la función devuelve 'len', que es la longitud del 
número entero 'n'.
*******************************************************************************/
/*
int main()
{
	printf("%d\n", ft_intlen(0));
	printf("%d\n", ft_intlen(-5859));
	printf("%d\n", ft_intlen(-2147483648));
	printf("%d\n", ft_intlen(2147483647));
	printf("%d\n", ft_intlen(-2147483647));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483647));
	return 0;
}
*/