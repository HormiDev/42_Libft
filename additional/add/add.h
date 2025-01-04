/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:06:19 by ide-dieg          #+#    #+#             */
/*   Updated: 2025/01/04 16:03:19 by ide-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADD_H
# define ADD_H

# include "../../libft.h"

typedef struct s_list	t_list;

/**
 * @file add.h
 * @brief Definición de la estructura `s_strlist`.
 *
 * La estructura `s_strlist` representa un nodo de una lista enlazada de cadenas.
 * Cada nodo contiene un puntero a una cadena, la longitud de la cadena y un 
 * puntero al siguiente nodo de la lista.
 */
typedef struct s_strlist
{
	char				*str;
	int					len;
	struct s_strlist	*next;
}	t_strlist;

/**
 * @file add.h
 * @brief Definición de la estructura `s_file`.
 * 
 * La estructura `s_file` alamacena el contenido de un archivo línea por línea.
 * La estructura contiene una lista de cadenas y un array de cadenas.
 * 
 * La lista de cadenas se representa mediante una estructura `t_strlist`.
 * El array de cadenas es una matriz de cadenas.
 * La estructura `s_file` también almacena el número de líneas del archivo.
 */
typedef struct s_file
{
	t_strlist	*list_content;
	char		**array_content;
	int			lines;
}	t_file;

/**
 * @file add.h
 * @brief Definición de la estructura `s_list_dbl`.
 * 
 * La estructura `s_list_dbl` representa un nodo de una lista doblemente 
 * enlazada. Cada nodo contiene un puntero a un contenido, un puntero al 
 * siguiente nodo y un puntero al nodo anterior.
 */
typedef struct s_list_dbl
{
	void				*content;
	struct s_list_dbl	*next;
	struct s_list_dbl	*prev;
}	t_list_dbl;

t_strlist	*ft_strlist_add_new_dup(t_strlist *lst, char *str);
t_strlist	*ft_strlist_add_new(t_strlist *lst, char *str);
void		ft_strlist_clear(t_strlist **lst);
int			ft_strlist_size(t_strlist *lst);
t_strlist	*ft_strlist_last(t_strlist *lst);
void		ft_strlist_change_dup(t_strlist *lst, char *str);
void		ft_strlist_change(t_strlist *lst, char *str);
void		ft_strlist_print(t_strlist *lst);
char		**ft_strlist_to_array(t_strlist *lst);
char		*ft_input(char *msg);
long		ft_atol(const char *str);
char		*ft_ltoa(long n);

t_file		*ft_create_file_from_filename(char *filename);
t_file		*ft_create_file_from_fd(int fd);
void		ft_file_clear(t_file **lst);
void		ft_file_print(t_file *lst);
t_file		*ft_file_dup(t_file *old_file);

char		**ft_create_str_rectangular_array(int x, int y);
void		ft_free_str_rectangular_array(char **array, int y);
char		*ft_strncpy(char *dst, const char *src, size_t len);
void		ft_free_split(char **split);
int			ft_splitlen(char **split);
char		*ft_strsjoin(const char **strs, int size);

void		*ft_malloc_lst(t_list **lst, size_t size);
void		*ft_calloc_lst(t_list **lst, size_t size);
void		*ft_malloc_lst_e(t_list **lst, size_t size);
void		*ft_calloc_lst_e(t_list **lst, size_t size);
void		*ft_alloc_lst(size_t size, int n_func);

t_list_dbl	*ft_list_dbl_new(void *content);
void		ft_list_dbl_add_front(t_list_dbl **lst, t_list_dbl *new);
void		ft_list_dbl_add_back(t_list_dbl **lst, t_list_dbl *new);
t_list_dbl	*ft_list_dbl_addnew_front(t_list_dbl **lst, void *content);
t_list_dbl	*ft_list_dbl_addnew_back(t_list_dbl **lst, void *content);
void		ft_list_dbl_add_prev(t_list_dbl *lst, t_list_dbl *new);
void		ft_list_dbl_add_next(t_list_dbl *lst, t_list_dbl *new);
void		ft_list_dbl_delone(t_list_dbl **lst, void (*del)(void *));
void		ft_list_dbl_clear(t_list_dbl **lst, void (*del)(void *));
t_list_dbl	*ft_list_dbl_get_last(t_list_dbl *lst);
t_list_dbl	*ft_list_dbl_get_first(t_list_dbl *lst);
int			ft_list_dbl_size(t_list_dbl *lst);
int			ft_list_dbl_get_position_node(t_list_dbl *node);

#endif