/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_t_list_dbl_new.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:21:01 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/12/11 14:34:30 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief Crea un nuevo nodo de una lista doblemente enlazada.
 *
 * Esta función crea un nuevo nodo de una lista doblemente enlazada y 
 * asigna el contenido del nodo con el valor pasado como argumento.
 *
 * @param content El contenido que se va a asignar al nuevo nodo.
 * @return Un puntero al nuevo nodo creado. Si no se puede asignar memoria, 
 * devuelve NULL.
 */
t_list_dbl	*ft_list_dbl_new(void *content)
{
	t_list_dbl	*new;

	new = malloc(sizeof(t_list_dbl));
	if (!new)
		return (0);
	new->content = content;
	new->next = 0;
	new->prev = 0;
	return (new);
}

/**
 * @brief Añade un nuevo nodo al principio de una lista doblemente enlazada.
 * 
 * Esta función añade un nuevo nodo al principio de una lista doblemente
 * enlazada. en caso de que la lista esté vacía, el nuevo nodo se convierte
 * en el primer nodo de la lista.
 * 
 * @param lst Doble puntero al primer nodo de la lista.
 * @param content El contenido que se va a asignar al nuevo nodo.
 * @return Un puntero al nuevo nodo creado. Si no se puede asignar memoria, 
 * devuelve NULL.
 */
t_list_dbl	*ft_list_dbl_addnew_front(t_list_dbl **lst, void *content)
{
	t_list_dbl	*new;

	new = ft_list_dbl_new(content);
	if (!new)
		return (0);
	ft_list_dbl_add_front(lst, new);
	return (new);
}

/**
 * @brief Añade un nuevo nodo al final de una lista doblemente enlazada.
 * 
 * Esta función añade un nuevo nodo al final de una lista doblemente
 * enlazada. en caso de que la lista esté vacía, el nuevo nodo se convierte
 * en el primer nodo de la lista.
 * 
 * @param lst Doble puntero al primer nodo de la lista.
 * @param content El contenido que se va a asignar al nuevo nodo.
 * @return Un puntero al nuevo nodo creado. Si no se puede asignar memoria, 
 * devuelve NULL.
 */
t_list_dbl	*ft_list_dbl_addnew_back(t_list_dbl **lst, void *content)
{
	t_list_dbl	*new;

	new = ft_list_dbl_new(content);
	if (!new)
		return (0);
	ft_list_dbl_add_back(lst, new);
	return (new);
}
