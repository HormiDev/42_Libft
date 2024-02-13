# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-dieg <ide-dieg@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 16:43:30 by ide-dieg          #+#    #+#              #
#    Updated: 2024/02/13 21:29:58 by ide-dieg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre de la biblioteca de salida
NAME = libft.a

# Compilador
CC = cc

# Opciones del compilador
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente
SRC = ft_isalpha.c \
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
	ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \

# Archivos objeto
OBJ = $(SRC:.c=.o)

# Construir la biblioteca
all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

# Compilar los archivos fuente en archivos objeto
%.o: %.c $(NAME)
	$(CC) -c $< -o $@

# Alias for building the library
libft.a: $(NAME)

# Clean object files
clean:
	rm -f $(OBJ)

# Clean object files and the library
fclean:
	rm -f $(OBJ) $(NAME)

# Rebuild the library
re: fclean all
