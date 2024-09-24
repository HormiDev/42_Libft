/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_strlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:09:33 by ide-dieg          #+#    #+#             */
/*   Updated: 2024/09/22 21:32:37 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @file fts_strlist.c
 * @brief Implementación de la función para limpiar una lista de cadenas.
 *
 * Esta función libera toda la memoria asociada con una lista de cadenas
 * (t_strlist) y establece el puntero de la lista a NULL.
 *
 * @param lst Doble puntero a la lista de cadenas 
 * (t_strlist) que se va a limpiar.
 *
 * La función recorre la lista, libera la memoria de cada cadena y de cada 
 * nodo,
 * y finalmente establece el puntero de la lista a NULL para evitar accesos
 * posteriores a memoria liberada.
 */
void	ft_strlist_clear(t_strlist **lst)
{
	t_strlist	*tmp;
	t_strlist	*next;

	if (!lst || !*lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		next = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = next;
	}
	*lst = 0;
}

/**
 * @file fts_strlist.c
 * @brief Implementación de la función para añadir un nuevo nodo a una 
 * lista de cadenas.
 *
 * Esta función añade un nuevo nodo a una lista de cadenas (t_strlist) 
 * con la cadena
 * pasada como argumento. La función crea una copia de la cadena y la 
 * almacena en el
 * nuevo nodo.
 *
 * @param lst Puntero a la lista de cadenas (t_strlist) a la que se va a 
 * añadir el nuevo nodo.
 * @param str Cadena que se va a copiar a la lista.
 *
 * @return Devuelve un puntero a la lista de cadenas con el nuevo nodo añadido.
 * Si no se puede añadir el nuevo nodo, la función libera toda la memoria 
 * asociada
 * con la lista y devuelve NULL.
 */
t_strlist	*ft_strlist_add_new_dup(t_strlist *lst, char *str)
{
	t_strlist	*new;
	t_strlist	*tmp;

	new = malloc(sizeof(t_strlist));
	if (!new)
	{
		ft_strlist_clear(&lst);
		return (0);
	}
	new->str = ft_strdup(str);
	new->len = ft_strlen2(str);
	new->next = 0;
	if (!lst)
		return (new);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (lst);
}

/**
 * @file fts_strlist.c
 * @brief Implementación de la función para añadir un nuevo nodo a una 
 * lista de cadenas.
 *
 * Esta función añade un nuevo nodo a una lista de cadenas (t_strlist) 
 * con la cadena
 * pasada como argumento. La función almacena la cadena pasada en el 
 * nuevo nodo.
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
int	ft_strlist_size(t_strlist *lst)
{
	int			i;
	t_strlist	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

/**
 * @file fts_strlist.c
 * @brief Implementación de la función para obtener el último nodo de una 
 * lista de cadenas.
 *
 * Esta función devuelve un puntero al último nodo de una lista de cadenas 
 * (t_strlist).
 *
 * @param lst Puntero a la lista de cadenas (t_strlist) de la que se va a 
 * obtener el último nodo.
 *
 * @return Devuelve un puntero al último nodo de la lista de cadenas.
 * Si la lista está vacía, la función devuelve NULL.
 */
t_strlist	*ft_strlist_last(t_strlist *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/**
 * @file fts_strlist.c
 * @brief Implementación de la función para cambiar la cadena de un nodo de 
 * una lista de cadenas.
 *
 * Esta función cambia la cadena de un nodo de una lista de cadenas (t_strlist) 
 * por la cadena
 * pasada como argumento. La función libera la memoria de la cadena anterior y 
 * almacena una copia
 * de la nueva cadena en el nodo.
 *
 * @param lst Puntero al nodo de la lista de cadenas (t_strlist) cuya cadena 
 * se va a cambiar.
 * @param str Cadena que se va a copiar en el nodo.
 */
void	ft_strlist_change_dup(t_strlist *lst, char *str)
{
	if (!lst)
		return ;
	free(lst->str);
	lst->str = ft_strdup(str);
	lst->len = ft_strlen(str);
}
