/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:03:02 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 06:50:23 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != 0 && del != 0)
	{
		del(lst->content);
		free(lst);
	}
}
/**********************************DESCRIPCION**********************************
La función 'ft_lstdelone' borra un nodo de una lista enlazada y libera la 
memoria que ocupaba. La función toma dos argumentos: un puntero a un nodo de la 
lista ('lst') y un puntero a una función ('del') que se utiliza para liberar la 
memoria del contenido del nodo.

Primero, la función comprueba si tanto 'lst' como 'del' no son NULL. Si alguno 
de ellos es NULL, la función no hace nada y simplemente retorna.

Si ambos 'lst' y 'del' no son NULL, la función procede a liberar la memoria del 
contenido del nodo. Esto se hace llamando a la función 'del' con el contenido 
del nodo como argumento (del(lst->content);).

Después de liberar la memoria del contenido del nodo, la función libera la 
memoria del nodo mismo. Esto se hace llamando a la función 'free' con el nodo 
como argumento (free(lst);).

En resumen, esta función borra un nodo de una lista enlazada y libera la 
memoria que ocupaba, utilizando una función de borrado proporcionada por el 
usuario.
*******************************************************************************/
/*
void del(void *content)
{
    free(content);
}

int main()
{
    int *num = malloc(sizeof(int));
    *num = 42;

    t_list *node = ft_lstnew(num);
    if (node == 0)
    {
        printf("Error: No se pudo crear el nodo\n");
        return (1);
    }

    ft_lstdelone(node, del);

    // No podemos comprobar directamente que la memoria del nodo ha sido 
	// liberada, pero podemos comprobar que no podemos acceder a ella sin 
	// obtener un error.
    // Si intentamos acceder a la memoria del nodo después de liberarla, 
	// obtendremos un error de segmentación.
    // Por lo tanto, si el programa llega a este punto sin errores, asumimos 
	// que ft_lstdelone funcionó correctamente.

    printf("El nodo ha sido borrado correctamente\n");

    return (0);
}
*/