/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:27:05 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 06:55:02 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != 0 && f != 0)
	{
		ft_lstiter(lst->next, f);
		f(lst->content);
	}
}
/**********************************DESCRIPCION**********************************
La función 'ft_lstiter' aplica una función dada a cada elemento de una lista 
enlazada. La función toma dos argumentos: un puntero a un nodo de la lista 
('lst') y un puntero a una función ('f') que se aplica a cada elemento de la 
lista.

Primero, la función comprueba si tanto 'lst' como 'f' no son NULL. Si alguno de 
ellos es NULL, la función no hace nada y simplemente retorna.

Si ambos 'lst' y 'f' no son NULL, la función procede a aplicar la función 'f' a 
cada elemento de la lista. Esto se hace de manera recursiva: primero, la 
función se llama a sí misma con el siguiente nodo de la lista como argumento 
(ft_lstiter(lst->next, f);), y luego aplica la función 'f' al contenido del 
odo actual (f(lst->content);).

En resumen, esta función recorre una lista enlazada y aplica una función 
proporcionada por el usuario a cada elemento de la lista. La recursión se 
utiliza para recorrer la lista, y la función se aplica a los elementos de la 
lista en orden inverso (desde el último al primero).
*******************************************************************************/
/*
void increment(void *content)
{
    int *num = (int *)content;
    (*num)++;
}

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

    t_list *node2 = ft_lstnew(num2);
    if (node2 == 0)
    {
        printf("Error: No se pudo crear el nodo\n");
        free(node1);
        return (1);
    }

    ft_lstadd_back(&list, node2);

    ft_lstiter(list, increment);

    if (*num1 != 43 || *num2 != 44)
    {
        printf("Error: La función no se aplicó correctamente\n");
        free(node1);
        free(node2);
        return (1);
    }

    printf("La función se aplicó correctamente\n");

    free(node1);
    free(node2);

    return (0);
}
*/