/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:52:07 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 06:27:10 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst != 0 && new != 0)
	{
		if (lst[0] != 0)
			ft_lstlast(lst[0])->next = new;
		else
			lst[0] = new;
	}
}
/**********************************DESCRIPCION**********************************
La función 'ft_lstadd_back'añade un nuevo nodo al final de una lista enlazada. 
La función toma dos argumentos: un puntero a un puntero a una lista enlazada 
('lst') y un puntero a un nodo ('new').

Primero, la función comprueba si tanto 'lst' como 'new' no son NULL. Si alguno 
de ellos es NULL, la función no hace nada y simplemente retorna.

Si ambos 'lst' y 'new' no son NULL, la función procede a comprobar si la lista 
enlazada es NULL (es decir, si la lista está vacía). Si la lista no está vacía 
('lst[0]' no es NULL), la función añade el nuevo nodo al final de la lista. 
Para hacer esto, utiliza la función 'ft_lstlast' para obtener el último nodo de 
la lista y establece su campo 'next' para apuntar al nuevo nodo.

Si la lista está vacía ('lst[0]' es NULL), la función simplemente establece 
'lst[0]' para apuntar al nuevo nodo. En otras palabras, el nuevo nodo se 
convierte en el primer (y único) nodo de la lista.

En resumen, esta función añade un nuevo nodo al final de una lista enlazada, 
manejando correctamente los casos en que la lista está vacía o el nuevo nodo es 
NULL.
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

    printf("Los nodos se añadieron correctamenta\n");

    free(node1);
    free(node2);

    return (0);
}
*/