/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:07:42 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/04 14:03:15 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*punt;

	punt = malloc(count * size);
	if (punt)
	{
		ft_bzero(punt, count * size);
		return (punt);
	}
	else
		return (0);
}
/**********************************DESCRIPCION**********************************
La función 'ft_calloc' es una implementación personalizada de 'calloc' en C. 
Esta función se utiliza para asignar memoria dinámicamente en el heap.

La función 'ft_calloc' toma dos argumentos: 'count' y 'size'. 'count' es el 
número de elementos que se van a asignar y 'size' es el tamaño de cada 
elemento. La función intenta asignar un bloque de memoria del tamaño total 
'count' * 'size'.

Primero, se declara un puntero 'void *punt'. Luego, se utiliza la función 
'malloc' para asignar la memoria. 'malloc' devuelve un puntero al primer byte 
de la memoria asignada.

Después de la asignación, se verifica si 'malloc' ha tenido éxito comprobando 
si 'punt' es distinto de NULL. Si 'punt' es NULL, significa que 'malloc' no 
pudo asignar la memoria solicitada y la función 'ft_calloc' devuelve NULL.

Si 'malloc' tuvo éxito, se utiliza la función 'ft_bzero' para inicializar la 
memoria asignada a 0. 'ft_bzero' toma dos argumentos: un puntero a la memoria 
que se va a inicializar y el número de bytes a inicializar. En este caso, se 
inicializa toda la memoria asignada.

Finalmente, la función 'ft_calloc' devuelve el puntero a la memoria asignada e 
inicializada.
*******************************************************************************/
/*
int main() {
    int n = 5;
    int *arr = calloc(n, sizeof(int));
	int *arr2 = calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria con calloc.\n");
        return 1;
    }

	if (arr2 == NULL) {
        printf("Error: No se pudo asignar memoria con ft_calloc.\n");
        return 1;
    }

    printf("Los valores iniciales con calloc son:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
	printf("\n");

	printf("Los valores iniciales con ft_calloc son:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Liberar la memoria
    free(arr);
	free(arr2);

    return 0;
}
*/