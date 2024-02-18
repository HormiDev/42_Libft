/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:35:13 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 06:34:58 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
		return (0);
	while (lst -> next != 0)
	{
		lst = lst -> next;
	}
	return (lst);
}
/**********************************DESCRIPCION**********************************
La función 'ft_lstlast' devuelve un puntero al último nodo de una lista 
enlazada. La función toma un argumento: un puntero a un nodo de la lista 
('lst').

Primero, la función comprueba si 'lst' es NULL. Si es NULL, la función retorna 
NULL, indicando que la lista está vacía.

Si 'lst' no es NULL, la función procede a recorrer la lista enlazada. Esto se 
hace en un bucle while que continúa mientras el campo 'next' del nodo actual no 
sea NULL. En cada iteración del bucle, la función avanza al siguiente nodo de 
la lista (lst = lst -> next;).

Cuando el campo 'next' del nodo actual es NULL, esto indica que el nodo actual 
es el último nodo de la lista. En este punto, la función retorna un puntero al 
último nodo (return (lst);).

En resumen, esta función recorre una lista enlazada y retorna un puntero al 
último nodo. Si la lista está vacía, la función retorna NULL.
*******************************************************************************/
/*
int main()
{
    t_list *list = NULL;
    int *num1 = malloc(sizeof(int));
    *num1 = 42;
    int *num2 = malloc(sizeof(int));
    *num2 = 43;

    t_list *node1 = ft_lstnew(num1);
    if (node1 == 0)
    {
        printf("Error: No se pudo crear el nodo\n");
        return (1);
    }

    ft_lstadd_back(&list, node1);

    if (list != node1)
    {
        printf("Error: El nodo no se añadió correctamente\n");
        free(node1);
        return (1);
    }

    t_list *node2 = ft_lstnew(num2);
    if (node2 == 0)
    {
        printf("Error: No se pudo crear el nodo\n");
        free(node1);
        return (1);
    }

    ft_lstadd_back(&list, node2);

    if (list->next != node2)
    {
        printf("Error: El nodo no se añadió correctamente\n");
        free(node1);
        free(node2);
        return (1);
    }

    printf("Los nodos se añadieron correctamente\n");

    free(node1);
    free(node2);

    return (0);
}
*/