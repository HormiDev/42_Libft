/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:33:05 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 06:16:24 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*point;

	if (lst != 0 && del != 0)
	{
		point = lst[0];
		while (point != 0)
		{
			next = point->next;
			ft_lstdelone(point, del);
			point = next;
		}
		lst[0] = 0;
	}
}
/**********************************DESCRIPCION**********************************
La función 'ft_lstclear' borra y libera la memoria de los nodos de una lista 
enlazada. La función toma dos argumentos: un puntero a un puntero a una lista 
enlazada ('lst') y un puntero a una función ('del') que se utiliza para liberar 
la memoria del contenido de cada nodo.

Primero, la función declara dos punteros a nodos de la lista, 'next' y 'point'.

Luego, la función comprueba si tanto 'lst' como 'del' no son NULL. Si alguno de 
ellos es NULL, la función no hace nada y simplemente retorna.

Si ambos 'lst' y 'del' no son NULL, la función procede a recorrer la lista. 
Para cada nodo en la lista, la función guarda un puntero al siguiente nodo 
('next'), luego libera la memoria del nodo actual utilizando la función 
'ft_lstdelone' y finalmente avanza al siguiente nodo.

Después de recorrer toda la lista, la función establece el primer nodo de la 
lista en NULL (lst[0] = 0;), indicando que la lista está ahora vacía.

En resumen, esta función borra todos los nodos de una lista enlazada y libera 
la memoria que ocupaban, utilizando una función de borrado proporcionada por el 
usuario.
*******************************************************************************/
/*
void del(void *content)
{
    free(content);
}

int main()
{
    t_list *node1, *node2, *node3;
    int *num = malloc(sizeof(int));
    *num = 42;
    char *str = ft_strdup("Hola, mundo!");

    node1 = ft_lstnew(num);
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

    ft_lstclear(&node1, del);

    if (node1 == 0)
    {
        printf("La lista ha sido borrada correctamente\n");
    }
    else
    {
        printf("Error: La lista no ha sido borrada correctamente\n");
    }

    return (0);
}
*/