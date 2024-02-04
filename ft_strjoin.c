/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 03:57:53 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/04 04:30:55 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == 0)
		return (0);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (str);
}
/**********************************DESCRIPCION**********************************
La función 'ft_strjoin' es una implementación personalizada que se utiliza 
para concatenar dos cadenas en reservando el espacio que requieran.

La función 'ft_strjoin' toma dos argumentos: 's1' y 's2', que son las cadenas 
que se van a concatenar.

Primero, se declara un puntero a char 'str'.

Luego, se utiliza la función 'malloc' para asignar memoria para la nueva cadena 
que será el resultado de la concatenación de 's1' y 's2'. El tamaño de la 
memoria que se asigna es la suma de las longitudes de 's1' y 's2' más 1 (para 
el carácter nulo al final de la cadena) multiplicado por el tamaño de un 
carácter.

Después de la asignación, se verifica si 'malloc' ha tenido éxito comprobando 
si 'str' es igual a 0. Si 'str' es 0, significa que 'malloc' no pudo asignar la 
memoria solicitada y la función 'ft_strjoin' devuelve 0.

Si 'malloc' tuvo éxito, se utiliza la función 'ft_strlcpy' para copiar la 
cadena 's1' a la nueva cadena 'str'. La función 'ft_strlcpy' toma tres 
argumentos: la cadena de destino, la cadena de origen y el tamaño máximo de la 
cadena de destino. En este caso, el tamaño máximo es la longitud de 's1' más 1.

Después de copiar 's1' a 'str', se utiliza la función 'ft_strlcat' para 
concatenar la cadena 's2' al final de la cadena 'str'. La función 'ft_strlcat' 
toma tres argumentos similares a 'ft_strlcpy'. En este caso, el tamaño máximo 
es la suma de las longitudes de 's1' y 's2' más 1.

Finalmente, la función 'ft_strjoin' devuelve el puntero a la cadena concatenada.
*******************************************************************************/
/*
int main()
{
	char *str1 = "Hola ";
	char *str2 = "mundo";
	
	char *str = ft_strjoin(str1, str2);
	printf("%s\n", str);
	return 0;
}
*/