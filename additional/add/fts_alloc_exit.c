/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_alloc_exit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:33:50 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/04/29 20:49:18 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

/**
 * @brief Añade una función de salida a la lista `exit_functions`.
 * 
 * @param f Puntero a la función de salida a añadir.
 * @note La función de salida se ejecutará al finalizar el programa.
 */
void	ft_add_exit_function(void (*f)(void))
{
	t_list	**lstt;
	void	*function;

	lstt = ft_get_alloc_lst(3);
	if (!lstt)
		return ;
	function = ft_alloc_lst(sizeof((void *)f), 3);
	ft_memmove(function, &f, sizeof((void *)f));
	ft_lstadd_back(lstt, ft_lstnew_ae(function));
}

/**
 * @brief Ejecuta todas las funciones de salida registradas en la lista
 * `exit_functions`.
 * 
 * @note Esta función se utiliza para liberar recursos y realizar tareas de
 * limpieza antes de que el programa termine.
 */
void	ft_exit_functions(void)
{
	t_list	**lstt;
	t_list	*lst;
	void	(*f)(void);

	lstt = ft_get_alloc_lst(3);
	if (!lstt || !*lstt)
		return ;
	lst = *lstt;
	while (lst)
	{
		ft_memmove(&f, lst->content, sizeof((void *)f));
		if (f)
			f();
		lst = lst->next;
	}
}
