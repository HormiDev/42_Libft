/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:43:19 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 07:14:43 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*listnew;
	t_list	*point;
	void	*buffer;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	listnew = 0;
	while (lst != 0)
	{
		buffer = f(lst->content);
		point = ft_lstnew(buffer);
		if (point == 0)
		{
			del(buffer);
			ft_lstclear(&listnew, del);
			return (0);
		}
		ft_lstadd_back(&listnew, point);
		lst = lst->next;
	}
	return (listnew);
}
/**********************************DESCRIPCION**********************************
La función 'ft_lstmap' crea una nueva lista enlazada aplicando una función 
dada a cada elemento de una lista existente. La función toma tres argumentos: 
un puntero a un nodo de la lista ('lst'), un puntero a una función ('f') que se 
aplica a cada elemento de la lista, y un puntero a una función ('del') que se 
utiliza para liberar la memoria del contenido de cada nodo.

Primero, la función comprueba si 'lst', 'f' o 'del' son NULL. Si alguno de 
ellos es NULL, la función retorna NULL.

Si ninguno de ellos es NULL, la función inicializa un puntero a una nueva lista 
('listnew') a NULL y luego entra en un bucle while que recorre la lista 
original.

Para cada nodo en la lista original, la función aplica la función 'f' al 
contenido del nodo y guarda el resultado en 'buffer'. Luego, crea un nuevo nodo 
con 'buffer' como contenido utilizando la función 'ft_lstnew' y guarda un 
puntero al nuevo nodo en 'point'.

Si la creación del nuevo nodo falla (es decir, 'ft_lstnew' retorna NULL), la 
función libera la memoria de 'buffer' utilizando la función 'del', borra y 
libera la memoria de todos los nodos de la nueva lista utilizando la función 
'ft_lstclear', y retorna NULL.

Si la creación del nuevo nodo tiene éxito, la función añade el nuevo nodo al 
final de la nueva lista utilizando la función 'ft_lstadd_back' y avanza al 
siguiente nodo de la lista original.

Después de recorrer toda la lista original, la función retorna un puntero al 
primer nodo de la nueva lista.

En resumen, esta función crea una nueva lista enlazada aplicando una función 
proporcionada por el usuario a cada elemento de una lista existente, y maneja 
correctamente los casos en que la creación de un nuevo nodo falla.
*******************************************************************************/
/*
void *increment(void *content)
{
    int *num = malloc(sizeof(int));
    *num = *(int *)content + 1;
    return num;
}

void del(void *content)
{
    free(content);
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

    t_list *new_list = ft_lstmap(list, increment, del);

    if (*(int *)new_list->content != 43 || *(int *)new_list->next->content != 44)
    {
        printf("Error: La función no se aplicó correctamente \n");
        free(node1);
        free(node2);
        return (1);
    }

    printf("La función se aplicó correctamente \n");

    free(node1);
    free(node2);

    return (0);
}
*/
/*	Version 1
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*listnew;
	t_list	*point;
	void	*buffer;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	buffer = f(lst->content);
	listnew = ft_lstnew(buffer);
	if (listnew == 0)
	{
		del(buffer);
		ft_lstclear(&listnew, del);
		return (0);
	}
	point = listnew;
	lst = lst->next;
	while (lst != 0)
	{
		buffer = f(lst->content);
		point->next = ft_lstnew(buffer);
		if (point->next == 0)
		{
			del(buffer);
			ft_lstclear(&listnew, del);
			return (0);
		}
		point = point->next;
		lst = lst->next;
	}
	return (listnew);
}

*/
/**********************************DESCRIPCION**********************************
La función 'ft_lstmap' crea una nueva lista enlazada aplicando una función 
dada a cada elemento de una lista existente. La función toma tres argumentos: 
un puntero a un nodo de la lista ('lst'), un puntero a una función ('f') que se 
aplica a cada elemento de la lista, y un puntero a una función ('del') que se 
utiliza para liberar la memoria del contenido de cada nodo.

Primero, la función comprueba si 'lst', 'f' o 'del' son NULL. Si alguno de 
ellos es NULL, la función retorna NULL.

Si ninguno de ellos es NULL, la función aplica la función 'f' al contenido del 
primer nodo de la lista y guarda el resultado en 'buffer'. Luego, crea un nuevo 
nodo con 'buffer' como contenido utilizando la función 'ft_lstnew' y guarda un 
puntero al nuevo nodo en 'listnew'.

Si la creación del nuevo nodo falla (es decir, 'ft_lstnew' retorna NULL), la 
función libera la memoria de 'buffer' utilizando la función 'del', borra y 
libera la memoria de todos los nodos de la nueva lista utilizando la función 
'ft_lstclear', y retorna NULL.

Si la creación del nuevo nodo tiene éxito, la función guarda un puntero al 
nuevo nodo en 'point' y avanza al siguiente nodo de la lista original.

Luego, la función entra en un bucle while que recorre el resto de la lista 
original. Para cada nodo en la lista original, la función aplica la función 'f' 
al contenido del nodo, crea un nuevo nodo con el resultado, y añade el nuevo 
nodo al final de la nueva lista. Si la creación de un nuevo nodo falla, la 
función libera la memoria del resultado y de todos los nodos de la nueva lista, 
y retorna NULL.

Después de recorrer toda la lista original, la función retorna un puntero al 
primer nodo de la nueva lista.

En resumen, esta función crea una nueva lista enlazada aplicando una función 
proporcionada por el usuario a cada elemento de una lista existente, y maneja 
correctamente los casos en que la creación de un nuevo nodo falla.
*******************************************************************************/