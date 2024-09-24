/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_t_strlist2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:42:15 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/24 03:15:18 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief Imprime todos los elementos de una lista enlazada de cadenas.
 *
 * Esta función recorre una lista enlazada de tipo t_strlist e imprime
 * cada cadena contenida en los nodos de la lista.
 *
 * @param lst Puntero al primer nodo de la lista enlazada de cadenas.
 */
void	ft_strlist_print(t_strlist *lst)
{
	if (!lst)
		return ;
	lst = lst;
	while (lst)
	{
		ft_printf("%s", lst->str);
		lst = lst->next;
	}
}

/**
 * @brief Añade un nuevo nodo a una lista de cadenas.
 *
 * Esta función añade un nuevo nodo a una lista de cadenas (t_strlist) con 
 * la cadena
 * pasada como argumento. La función almacena la cadena pasada en el nuevo 
 * nodo.
 *
 * @param lst Puntero a la lista de cadenas (t_strlist) a la que se va a 
 * añadir el nuevo nodo.
 * @param str Cadena que se va a añadir a la lista.
 *
 * @return Devuelve un puntero a la lista de cadenas con el nuevo nodo añadido.
 * Si no se puede añadir el nuevo nodo, la función libera toda la memoria 
 * asociada
 * con la lista y devuelve NULL.
 */
t_strlist	*ft_strlist_add_new(t_strlist *lst, char *str)
{
	t_strlist	*new;

	new = malloc(sizeof(t_strlist));
	if (!new)
	{
		ft_strlist_clear(&lst);
		return (0);
	}
	new->str = str;
	new->len = ft_strlen2(str);
	new->next = 0;
	if (!lst)
		return (new);
	ft_strlist_last(lst)->next = new;
	return (lst);
}

/**
 * @brief Cambia la cadena de un nodo de una lista de cadenas.
 *
 * Esta función cambia la cadena de un nodo de una lista de cadenas (t_strlist)
 * por la cadena pasada como argumento. La función libera la memoria de la 
 * cadena
 * anterior y almacena la nueva cadena en el nodo.
 *
 * @param lst Puntero al nodo de la lista de cadenas que se va a modificar.
 * @param str Cadena que se va a almacenar en el nodo.
 */
void	ft_strlist_change(t_strlist *lst, char *str)
{
	if (!lst)
		return ;
	free(lst->str);
	lst->str = str;
	lst->len = ft_strlen2(str);
}


/**
 * @brief crea la un array apartir una lista de cadenas.
 * `t_strlist`.
 *
 * @param lst Un puntero a la lista enlazada de tipo `t_strlist`.
 * @return Un array de cadenas (char **) que contiene todas las cadenas de la lista enlazada.
 *         El último elemento del array es un puntero nulo (0).
 *         Si la lista enlazada es nula o si la asignación de memoria falla, devuelve 0.
 */
char	**ft_strlist_to_array(t_strlist *lst)
{
	char		**array;
	int			i;

	if (!lst)
		return (0);
	array = malloc(sizeof(char *) * (ft_strlist_size(lst) + 1));
	if (!array)
		return (0);
	i = 0;
	while (lst)
	{
		array[i] = lst->str;
		lst = lst->next;
		i++;
	}
	array[i] = 0;
	return (array);
}
