/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:19:34 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 05:56:53 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cont;

	if (lst == 0)
		return (0);
	cont = 1;
	while (lst -> next != 0)
	{
		lst = lst -> next;
		cont++;
	}
	return (cont);
}
/**********************************DESCRIPCION**********************************
La función 'ft_lstsize' devuelve el número de nodos en una lista enlazada. La 
función toma un argumento: un puntero a un nodo de la lista ('lst').

Primero, la función comprueba si 'lst' es NULL. Si es NULL, la función retorna 
0, indicando que la lista está vacía.

Si 'lst' no es NULL, la función inicializa un contador ('cont') a 1, ya que al 
menos hay un nodo en la lista (el nodo al que apunta 'lst').

Luego, la función entra en un bucle while que recorre la lista. En cada 
iteración del bucle, la función avanza al siguiente nodo de la lista 
(lst = lst -> next;) y incrementa el contador (cont++;).

El bucle continúa hasta que el campo 'next' del nodo actual sea NULL, lo que 
indica que el nodo actual es el último nodo de la lista. En este punto, la 
función retorna el contador, que es el número de nodos en la lista.

En resumen, esta función recorre una lista enlazada y retorna el número de 
nodos en la lista. Si la lista está vacía, la función retorna 0.
*******************************************************************************/
/*
int main()
{
    t_list *node1, *node2, *node3;
    int num = 42;
    char *str = "Hola, mundo!";

    node1 = ft_lstnew(&num);
    if (node1 == 0)
    {
        printf("Error: No se pudo crear el nodo\n");
        return (1);
    }

    node2 = ft_lstnew(str);
    if (node2 == 0)
    {
        printf("Error: No se pudo crear el nodo\n");
        free(node1);
        return (1);
    }

    node3 = ft_lstnew(0);
    if (node3 == 0)
    {
        printf("Error: No se pudo crear el nodo\n");
        free(node1);
        free(node2);
        return (1);
    }

    node1->next = node2;
    node2->next = node3;

    int size = ft_lstsize(node1);
    printf("Tamaño de la lista: %d\n", size);

    free(node1);
    free(node2);
    free(node3);

    return (0);
}
*/