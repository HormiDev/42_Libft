/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:13:54 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 00:27:32 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == 0)
		return (0);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
/**********************************DESCRIPCION**********************************
La función 'ft_lstnew' crea un nuevo nodo para una lista enlazada. La función 
toma un argumento 'content' que es un puntero a cualquier tipo de dato.

Primero, la función declara un puntero 'node' a una estructura 't_list'. Luego, 
se reserva memoria para un nuevo nodo de la lista utilizando la función 
'malloc'. La cantidad de memoria que se reserva es igual al tamaño de la 
estructura 't_list'.

Después de reservar la memoria, la función comprueba si 'malloc' devolvió NULL, 
lo que indicaría que no se pudo reservar la memoria. Si 'malloc' devolvió NULL, 
la función 'ft_lstnew' también devuelve NULL.

Si la reserva de memoria fue exitosa, la función asigna el argumento 'content' 
al campo 'content' del nuevo nodo y establece el campo 'next' del nuevo nodo en 
NULL, indicando que este nodo es actualmente el último nodo de la lista.

Finalmente, la función devuelve un puntero al nuevo nodo.

Este código es un patrón común en C para crear una nueva estructura y asignarle 
valores iniciales.
*******************************************************************************/