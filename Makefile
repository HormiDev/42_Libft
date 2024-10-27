# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 16:43:30 by ide-dieg          #+#    #+#              #
#    Updated: 2024/10/27 12:02:08 by ide-dieg         ###   ########.fr        #
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
					additional/libft_protected/ft_strlen2.c \
					additional/add/ft_create_str_rectangular_array.c \
					additional/add/ft_strncpy.c \
					additional/add/ft_free_split.c \
					additional/add/fts_alloc_lst.c \

# Regla para compilar los archivos fuente
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo -n "█";

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
$(NAME): $(ide-dieg) $(libft_title) $(OBJ)
	@if [ ! -f $(NAME) ]; then \
		$(AR) $(ARFLAGS) $(NAME) $(OBJ); \
		ranlib $(NAME); \
		echo "$(NAME) compiled"; \
	else \
		echo "$(NAME) is already compiled"; \
	fi

# Regla para compilar los archivos fuente de la parte bonus
bonus: $(ide-dieg) $(libft_title) $(OBJ_BONUS)
	@if [ ! -f $(NAME) ]; then \
		$(AR) $(ARFLAGS) $(NAME) $(OBJ_BONUS); \
		ranlib $(NAME); \
		echo "$(NAME) compiled"; \
	else \
		echo "$(NAME) is already compiled"; \
	fi

# Regla para compilar los archivos fuente adicionales
clean:
	rm -f $(OBJ) $(OBJ_BONUS) $(OBJ_ADDITIONAL)

# Regla para eliminar los archivos objeto y el archivo de salida
fclean:
	rm -f $(OBJ) $(OBJ_BONUS) $(OBJ_ADDITIONAL) $(NAME)

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
