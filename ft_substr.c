/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 01:41:28 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/04 03:44:34 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	cont;

	cont = 0;
	if (start > ft_strlen(s))
		len = 0;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (cont < len)
	{
		str[cont] = s[cont + (size_t)start];
		cont++;
	}
	str[cont] = 0;
	return (str);
}
/**********************************DESCRIPCION**********************************
La función 'ft_substr' implementación personalizada que se utiliza para extraer 
una subcadena de una cadena dada en C.

La función 'ft_substr' toma tres argumentos: 's', que es la cadena de la que se 
va a extraer la subcadena, 'start', que es el índice desde el que se va a 
empezar a extraer la subcadena, y 'len', que es la longitud de la subcadena 
que se va a extraer.

Primero, se declara un puntero a char 'str' y una variable de tamaño 'cont' que 
se inicializa a 0.

Luego, se comprueba si el valor de 'start' es mayor que la longitud de la 
cadena 's'. Si es así, se establece el valor de 'len' a 0, ya que no se puede 
extraer ninguna subcadena en este caso.

Después, se comprueba si la longitud de la cadena 's' es menor que 'len'. Si es 
así, se establece el valor de 'len' a la longitud de la cadena 's', ya que no 
se puede extraer una subcadena más larga que la cadena original.

A continuación, se utiliza la función 'malloc' para asignar memoria para la 
subcadena. El tamaño de la memoria que se asigna es 'len' más 1 (para el 
carácter nulo al final de la cadena) multiplicado por el tamaño de un carácter.

Después de la asignación, se verifica si 'malloc' ha tenido éxito comprobando 
si 'str' es igual a 0. Si 'str' es 0, significa que 'malloc' no pudo asignar la 
memoria solicitada y la función 'ft_substr' devuelve 0.

Si 'malloc' tuvo éxito, se entra en un bucle while donde se copia cada carácter 
de la cadena original 's' a la nueva cadena 'str' uno por uno, comenzando desde 
el índice 'start'. Este bucle continúa hasta que se ha copiado la longitud 
deseada 'len'.

Después de copiar la subcadena, se añade un carácter nulo al final de la nueva 
cadena para indicar el final de la cadena.

Finalmente, la función 'ft_substr' devuelve el puntero a la subcadena extraída.
*******************************************************************************/
/*
int main()
{
    char const *s;
    char *result;

    s = "Hola, mundo!";
    result = ft_substr(s, 0, 5);
    printf("Prueba recortando len: %s\n", result);
    free(result);

	s = "Hola, mundo!";
    result = ft_substr(s, 5, 10);
    printf("Prueba aumentando start: %s\n", result);
    free(result);

    s = "Hola, mundo!";
    result = ft_substr(s, 0, 500000000000);
    printf("Prueba con len demasiado largo: %s\n", result);
    free(result);

    s = "Hola, mundo!";
    result = ft_substr(s, 50000000, 5);
    printf("Prueba con start demasiado largo: %s\n", result);
    free(result);

    s = "";
    result = ft_substr(s, 0, 5);
    printf("Prueba con s vacío: %s\n", result);
    free(result);

    return 0;
}
*/