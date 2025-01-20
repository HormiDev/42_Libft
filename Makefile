# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 16:43:30 by ide-dieg          #+#    #+#              #
#    Updated: 2025/01/20 03:29:33 by ide-dieg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo de salida
NAME = libft.a

# Compilador
CC = cc

# Archivador
AR = ar

# Opciones de compilación
CFLAGS = -Wall -Wextra -Werror

# Opciones de archivado
ARFLAGS = -rcs

# Archivos fuente
SRC =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_strncmp.c \
		ft_memcmp.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_bzero.c \
		ft_memset.c \
		ft_memchr.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

# Archivos fuente para la parte bonus
SRC_BONUS =	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \

# Archivos fuente adicionales
SRC_ADDITIONAL =	additional/42_ft_printf/ft_strlen_int.c \
					additional/42_ft_printf/ft_printf.c \
					additional/42_ft_printf/ft_putchar.c \
					additional/42_ft_printf/ft_putnbr_base.c \
					additional/42_ft_printf/ft_putnbr_base_p.c \
					additional/42_ft_printf/ft_putstr.c \
					additional/42_get_next_line/get_next_line.c \
					additional/42_get_next_line/get_next_line_utils.c \
					additional/add/fts_t_strlist.c \
					additional/add/fts_t_strlist2.c \
					additional/add/fts_t_file.c \
					additional/add/ft_create_str_rectangular_array.c \
					additional/add/ft_strncpy.c \
					additional/add/ft_free_split.c \
					additional/add/fts_alloc_lst.c \
					additional/add/ft_input.c \
					additional/add/ft_splitlen.c \
					additional/add/ft_atol.c \
					additional/add/ft_ltoa.c \
					additional/add/ft_strsjoin.c \
					additional/add/fts_t_list_dbl.c \
					additional/add/fts_t_list_dbl_add.c \
					additional/add/fts_t_list_dbl_clear.c \
					additional/add/fts_t_list_dbl_new.c \
					additional/add/ft_free_alloc.c \
					additional/add/ft_add_to_alloc_lst.c \
					additional/libft_protected/ft_strlen_p.c \
					additional/libft_protected/ft_strjoin_p.c \
					additional/libft_protected/ft_strlcat_p.c \
					additional/libft_protected/ft_strlcpy_p.c \
					additional/libft_protected/ft_strdup_p.c \
					additional/libft_protected/ft_substr_p.c \
					additional/libft_protected/ft_split_p.c \
					additional/libft_protected/ft_strncmp_p.c \
					additional/libft_protected/ft_atoi_p.c \
					additional/libft_alloc/ft_split_a.c \
					additional/libft_alloc/ft_split_ae.c \
					additional/libft_alloc/ft_strdup_a.c \
					additional/libft_alloc/ft_strjoin_a.c \
					additional/libft_alloc/ft_substr_a.c \
					additional/libft_alloc/ft_lstnew_a.c \
					additional/ft_sprintf/ft_sprintf.c \
					additional/ft_sprintf/ft_sprintf_char.c \
					additional/ft_sprintf/ft_sprintf_str.c \
					additional/ft_sprintf/ft_sprintf_nbr_base.c \
					additional/ft_sprintf/ft_sprintf_nbr_base_u.c \
					additional/ft_dprintf/ft_dprintf.c \
					additional/ft_dprintf/ft_dprintf_str.c \
					additional/ft_dprintf/ft_dprintf_nbr_base.c \
					additional/ft_dprintf/ft_dprintf_nbr_base_u.c \

# Regla para compilar los archivos fuente
%.o: %.c
	@if [ ! -f $(NAME) ]; then \
		$(CC) $(CFLAGS) -c $< -o $@; \
		echo -n "█"; \
	fi

# Objetos generados a partir de los archivos fuente
OBJ = $(SRC:.c=.o)

# Objetos generados a partir de los archivos fuente de la parte bonus
OBJ_BONUS = $(SRC_BONUS:.c=.o)

# Objetos generados a partir de los archivos fuente adicionales
OBJ_ADDITIONAL = $(SRC_ADDITIONAL:.c=.o)

# Regla por defecto
all: ide-dieg libft_title $(OBJ) $(OBJ_BONUS) $(OBJ_ADDITIONAL)
	@if [ ! -f $(NAME) ]; then \
		$(AR) $(ARFLAGS) $(NAME) $(OBJ) $(OBJ_BONUS) $(OBJ_ADDITIONAL); \
		ranlib $(NAME); \
		echo "$(NAME) compiled"; \
	else \
		echo "$(NAME) is already compiled"; \
	fi

# Regla para compilar todos los archivos fuente
$(NAME): ide-dieg libft_title $(OBJ)
	@if [ ! -f $(NAME) ]; then \
		$(AR) $(ARFLAGS) $(NAME) $(OBJ); \
		ranlib $(NAME); \
		echo "$(NAME) compiled"; \
	else \
		echo "$(NAME) is already compiled"; \
	fi

# Regla para compilar los archivos fuente de la parte bonus
bonus: ide-dieg libft_title $(OBJ_BONUS)
	@if [ ! -f $(NAME) ]; then \
		$(AR) $(ARFLAGS) $(NAME) $(OBJ_BONUS); \
		ranlib $(NAME); \
		echo "$(NAME) compiled"; \
	else \
		echo "$(NAME) is already compiled"; \
	fi

# Regla para compilar los archivos fuente adicionales
clean:
	@rm -f $(OBJ) $(OBJ_BONUS) $(OBJ_ADDITIONAL)
	@echo "Objects removed"

# Regla para eliminar los archivos objeto y el archivo de salida
fclean:
	@rm -f $(OBJ) $(OBJ_BONUS) $(OBJ_ADDITIONAL) $(NAME)
	@echo "Objects and $(NAME) removed"

# Regla para recompilar todo
re: fclean all

# Regla para recompilar la parte bonus
rebonus: fclean bonus

# Regla para recompilar los archivos fuente adicionales
re$(NAME): fclean $(NAME)

ROJO = \033[0;31m
NC = \033[0m
NARANJA = \033[0;33m
AZUL = \033[0;34m
VERDE = \033[0;32m

ide-dieg:
	@clear	
	@echo "$(ROJO)██╗██████╗ ███████╗    ██████╗ ██╗███████╗ ██████╗ $(AZUL)         ██╗  ██╗██████╗ "
	@echo "$(ROJO)██║██╔══██╗██╔════╝    ██╔══██╗██║██╔════╝██╔════╝ $(AZUL)         ██║  ██║╚════██╗"
	@echo "$(ROJO)██║██║  ██║█████╗█████╗██║  ██║██║█████╗  ██║  ███╗$(AZUL)         ███████║ █████╔╝"
	@echo "$(ROJO)██║██║  ██║██╔══╝╚════╝██║  ██║██║██╔══╝  ██║   ██║$(AZUL)         ╚════██║██╔═══╝ "
	@echo "$(ROJO)██║██████╔╝███████╗    ██████╔╝██║███████╗╚██████╔╝$(AZUL)              ██║███████╗"
	@echo "$(ROJO)╚═╝╚═════╝ ╚══════╝    ╚═════╝ ╚═╝╚══════╝ ╚═════╝ $(AZUL)              ╚═╝╚══════╝"
	@echo "$(NARANJA)██╗  ██╗ ██████╗ ██████╗ ███╗   ███╗██╗██████╗ ███████╗██╗   ██╗$(VERDE)       ██╗  "
	@echo "$(NARANJA)██║  ██║██╔═══██╗██╔══██╗████╗ ████║██║██╔══██╗██╔════╝██║   ██║$(VERDE)   ██╗ ╚═██╗"
	@echo "$(NARANJA)███████║██║   ██║██████╔╝██╔████╔██║██║██║  ██║█████╗  ██║   ██║$(VERDE)   ╚═╝   ██║"
	@echo "$(NARANJA)██╔══██║██║   ██║██╔══██╗██║╚██╔╝██║██║██║  ██║██╔══╝  ╚██╗ ██╔╝$(VERDE)   ██╗   ██║"
	@echo "$(NARANJA)██║  ██║╚██████╔╝██║  ██║██║ ╚═╝ ██║██║██████╔╝███████╗ ╚████╔╝ $(VERDE)   ╚═╝ ██╔═╝ "
	@echo "$(NARANJA)╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚═╝╚═════╝ ╚══════╝  ╚═══╝  $(VERDE)       ╚═╝  $(NC)"

libft_title:
	@echo " __    __  ____  ____  ____ "
	@echo "(  )  (  )(  _ \(  __)(_  _)"
	@echo "/ (_/\ )(  ) _ ( ) _)   )(  "
	@echo "\____/(__)(____/(__)   (__) "
