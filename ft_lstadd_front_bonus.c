/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:04:54 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 06:21:53 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = lst[0];
	lst[0] = new;
}
/**********************************DESCRIPCION**********************************
La función 'ft_lstadd_front' añade un nuevo nodo al principio de una lista 
enlazada. La función toma dos argumentos: un puntero a un puntero a una lista 
enlazada ('lst') y un puntero a un nodo ('new').

Primero, la función establece el campo 'next' del nuevo nodo para que apunte al 
primer nodo de la lista. Esto se hace con la línea new -> next = lst[0];. Esto 
significa que el nuevo nodo ahora apunta al nodo que era originalmente el 
primero en la lista.

Luego, la función establece el primer nodo de la lista para que sea el nuevo 
nodo. Esto se hace con la línea lst[0] = new;. Esto significa que el nuevo nodo 
se convierte en el primer nodo de la lista.

En resumen, esta función añade un nuevo nodo al principio de una lista 
enlazada, desplazando todos los otros nodos hacia abajo en la lista.
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

    ft_lstadd_front(&list, node1);

    if (list != node1)
    {
        printf("Error: El nodo no se añadió correctamente \n");
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

    ft_lstadd_front(&list, node2);

    if (list != node2 || list->next != node1)
    {
        printf("Error: El nodo no se añadió correctamente \n");
        free(node1);
        free(node2);
        return (1);
    }

    printf("Los nodos se añadieron correctamente \n");

    free(node1);
    free(node2);

    return (0);
}
*/