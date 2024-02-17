/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:04:54 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/02/18 00:32:18 by ide-dieg         ###   ########.fr       */
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