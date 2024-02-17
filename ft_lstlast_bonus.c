/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:35:13 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 00:42:42 by ide-dieg         ###   ########.fr       */
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