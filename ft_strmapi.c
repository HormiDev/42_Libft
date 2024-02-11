/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:51:53 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/11 19:17:35 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*str;

	if (s == 0 && f == 0)
		return (0);
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	str[len] = 0;
	while (len-- > 0)
	{
		str[len] = f(len, s[len]);
	}
	return (str);
}
/**********************************DESCRIPCION**********************************
La función 'ft_strmapi' aplica una función a cada carácter de una cadena de 
caracteres para crear una nueva cadena.

La función toma dos argumentos: una cadena de caracteres 's' y una función 'f'. 
La función 'f' toma dos argumentos: un entero sin signo y un carácter. El 
objetivo es aplicar 'f' a cada carácter de 's' y crear una nueva cadena con 
los resultados.

Primero, verifica si 's' o 'f' son 0. Si es así, devuelve 0, porque no puede 
proceder sin una cadena o una función.

Luego, utiliza la función 'ft_strlen' para calcular la longitud de 's' y 
almacena el resultado en 'len'.

Después, asigna memoria para 'str', que es una cadena de caracteres. El tamaño 
de la cadena es 'len' más uno, para tener en cuenta el último carácter nulo.

Si la asignación de memoria para 'str' es exitosa, establece el último carácter 
de 'str' en 0.

Luego, entra en un bucle while que continúa mientras 'len' sea mayor que 0. 
Dentro del bucle, aplica 'f' al carácter en la posición 'len' de 's' y almacena 
el resultado en la posición 'len' de 'str'. Luego, decrementa 'len' en uno.

Cuando el bucle termina, devuelve 'str', que es la nueva cadena creada 
aplicando 'f' a cada carácter de 's'.

Si la asignación de memoria para 'str' no es exitosa, la función devuelve 0.
*******************************************************************************/
/*
char incrementchar(unsigned int num, char a)
{
	return (a + num);
}

int main()
{
	printf("01234\n");
	printf("%s\n", ft_strmapi("01234", incrementchar));
	return 0;
}
*/