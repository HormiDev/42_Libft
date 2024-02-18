/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:04:19 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 09:55:57 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	cont;

	cont = 0;
	str = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (cont < ft_strlen(s1))
	{
		str[cont] = s1[cont];
		cont++;
	}
	str[cont] = 0;
	return (str);
}
/**********************************DESCRIPCION**********************************
La función 'ft_strdup' es una implementación personalizada de 'strdup' en C. 
Esta función se utiliza para crear una copia duplicada de una cadena de 
caracteres existente.

La función 'ft_strdup' toma un argumento: 's1', que es la cadena que se va a 
duplicar.

Primero, se declara un puntero a char 'str' y una variable de tamaño 'cont' que 
se inicializa a 0.

Luego, se utiliza la función 'malloc' para asignar memoria para la nueva 
cadena. El tamaño de la memoria que se asigna es la longitud de la cadena 
original 's1' (obtenida mediante la función 'ft_strlen') más 1 (para el 
carácter nulo al final de la cadena) multiplicada por el tamaño de un carácter.

Después de la asignación, se verifica si 'malloc' ha tenido éxito comprobando 
si 'str' es igual a 0. Si 'str' es 0, significa que 'malloc' no pudo asignar la 
memoria solicitada y la función 'ft_strdup' devuelve 0.

Si 'malloc' tuvo éxito, se entra en un bucle while donde se copia cada carácter 
de la cadena original 's1' a la nueva cadena 'str' uno por uno. Este bucle 
continúa hasta que se ha copiado toda la cadena original.

Después de copiar la cadena, se añade un carácter nulo al final de la nueva 
cadena para indicar el final de la cadena.

Finalmente, la función 'ft_strdup' devuelve el puntero a la nueva cadena 
duplicada.
*******************************************************************************/
/*
#include <stdio.h>
#include <string.h>

int main() {
    char *original = "Hola mundo";
    char *copia = strdup(original);
	char *copia2 = strdup(original);

    if (copia == NULL) {
        printf("strdup no pudo reservar memoria.\n");
        return 1; // Retorna un código de error
    }
	
	if (copia2 == NULL) {
        printf("ft_strdup no pudo reservar memoria.\n");
        return 1; // Retorna un código de error
    }

    printf("Cadena original: %s\n", original);
    printf("Copia de la strdup: %s\n", copia);
	printf("Copia de la ft_strdup: %s\n", copia2);

    free(copia); // No olvides liberar la memoria!

    return 0;
}
*/