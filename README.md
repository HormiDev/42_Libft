## Hola🤗 bienvenid@ a 42_Libft, mi biblioteca de C creada como parte del primer proyecto de Campus 42. 
# `125/100`

## Las funciones que he implementado son:

- [`isalpha`](https://github.com/HormiDev/42_Libft/blob/main/ft_isalpha.c), [`isdigit`](https://github.com/HormiDev/42_Libft/blob/main/ft_isdigit.c), [`isalnum`](https://github.com/HormiDev/42_Libft/blob/main/ft_isalnum.c), [`isascii`](https://github.com/HormiDev/42_Libft/blob/main/ft_isascii.c), [`isprint`](https://github.com/HormiDev/42_Libft/blob/main/ft_isprint.c): Estas funciones comprueban si un carácter dado tiene ciertas propiedades (alfabético, dígito, alfanumérico, ASCII, imprimible).
- [`strlen`](https://github.com/HormiDev/42_Libft/blob/main/ft_strlen.c): Calcula la longitud de una cadena de caracteres.
- [`memset`](https://github.com/HormiDev/42_Libft/blob/main/ft_memset.c), [`bzero`](https://github.com/HormiDev/42_Libft/blob/main/ft_bzero.c): Estas funciones manipulan los bytes en la memoria.
- [`memcpy`](https://github.com/HormiDev/42_Libft/blob/main/ft_memcpy.c), [`memmove`](https://github.com/HormiDev/42_Libft/blob/main/ft_memmove.c): Estas funciones copian los bytes entre las regiones de memoria.
- [`strlcpy`](https://github.com/HormiDev/42_Libft/blob/main/ft_strlcpy.c), [`strlcat`](https://github.com/HormiDev/42_Libft/blob/main/ft_strlcat.c): Estas funciones copian y concatenan cadenas respectivamente.
- [`toupper`](https://github.com/HormiDev/42_Libft/blob/main/ft_toupper.c), [`tolower`](https://github.com/HormiDev/42_Libft/blob/main/ft_tolower.c): Estas funciones convierten los caracteres de minúsculas a mayúsculas y viceversa.
- [`strchr`](https://github.com/HormiDev/42_Libft/blob/main/ft_strchr.c), [`strrchr`](https://github.com/HormiDev/42_Libft/blob/main/ft_strrchr.c): Estas funciones buscan un carácter en una cadena.
- [`strncmp`](https://github.com/HormiDev/42_Libft/blob/main/ft_strncmp.c), [`memchr`](https://github.com/HormiDev/42_Libft/blob/main/ft_memchr.c), [`memcmp`](https://github.com/HormiDev/42_Libft/blob/main/ft_memcmp.c), [`strnstr`](https://github.com/HormiDev/42_Libft/blob/main/ft_strnstr.c): Estas funciones comparan cadenas o regiones de memoria, buscan un carácter en una región de memoria, y buscan una subcadena dentro de una cadena.
- [`atoi`](https://github.com/HormiDev/42_Libft/blob/main/ft_atoi.c): Esta función convierte una cadena en un entero.

Además, he implementado las siguientes funciones que requieren el uso de `malloc` para asignar memoria dinámicamente:

- [`calloc`](https://github.com/HormiDev/42_Libft/blob/main/ft_calloc.c): Esta función asigna memoria para un arreglo de elementos de un cierto tamaño y los inicializa a cero.
- [`strdup`](https://github.com/HormiDev/42_Libft/blob/main/ft_strdup.c): Esta función crea una copia nueva de una cadena existente.

## Funciones Adicionales

- Manipulación de cadenas:
  - [`substr`](https://github.com/HormiDev/42_Libft/blob/main/ft_substr.c): Obtiene una subcadena de una cadena.
  - [`strjoin`](https://github.com/HormiDev/42_Libft/blob/main/ft_strjoin.c): Une dos cadenas.
  - [`strtrim`](https://github.com/HormiDev/42_Libft/blob/main/ft_strtrim.c): Recorta los caracteres especificados del inicio y del final de una cadena.
  - [`split`](https://github.com/HormiDev/42_Libft/blob/main/ft_split.c): Divide la cadena usando el carácter dado como delimitador.
  - [`strmapi`](https://github.com/HormiDev/42_Libft/blob/main/ft_strmapi.c): Aplica la función dada a cada carácter de la cadena para crear una nueva cadena.
  - [`striteri`](https://github.com/HormiDev/42_Libft/blob/main/ft_striteri.c): Aplica la función dada a cada carácter de la cadena.

- Conversión de datos:
  - [`itoa`](https://github.com/HormiDev/42_Libft/blob/main/ft_itoa.c): Convierte un número entero en una cadena.

- Salida de datos:
  - [`putchar_fd`](https://github.com/HormiDev/42_Libft/blob/main/ft_putchar_fd.c): Escribe el carácter dado en el descriptor de archivo dado.
  - [`putstr_fd`](https://github.com/HormiDev/42_Libft/blob/main/ft_putstr_fd.c): Escribe la cadena dada en el descriptor de archivo dado.
  - [`putendl_fd`](https://github.com/HormiDev/42_Libft/blob/main/ft_putendl_fd.c): Escribe la cadena dada seguida de un salto de línea en el descriptor de archivo dado.
  - [`putnbr_fd`](https://github.com/HormiDev/42_Libft/blob/main/ft_putnbr_fd.c): Escribe el número entero dado en el descriptor de archivo dado.

## Funciones Bonus:
  - [`lstnew`](https://github.com/HormiDev/42_Libft/blob/main/ft_lstnew_bonus.c): Crea un nuevo nodo.
  - [`lstadd_front`](https://github.com/HormiDev/42_Libft/blob/main/ft_lstadd_front_bonus.c): Agrega el nuevo nodo al principio de la lista.
  - [`lstsize`](https://github.com/HormiDev/42_Libft/blob/main/ft_lstsize_bonus.c): Cuenta el número de nodos en una lista.
  - [`lstlast`](https://github.com/HormiDev/42_Libft/blob/main/ft_lstlast_bonus.c): Devuelve el último nodo de la lista.
  - [`lstadd_back`](https://github.com/HormiDev/42_Libft/blob/main/ft_lstadd_back_bonus.c): Agrega el nuevo nodo al final de la lista.
  - [`lstdelone`](https://github.com/HormiDev/42_Libft/blob/main/ft_lstdelone_bonus.c): Elimina y libera el nuevo nodo.
  - [`lstclear`](https://github.com/HormiDev/42_Libft/blob/main/ft_lstclear_bonus.c): Elimina y libera el primer nodo de la lista y todos los sucesores.
  - [`lstiter`](https://github.com/HormiDev/42_Libft/blob/main/ft_lstiter_bonus.c): Itera la lista y aplica la función 'f' al contenido de cada nodo.
  - [`lstmap`](https://github.com/HormiDev/42_Libft/blob/main/ft_lstmap_bonus.c): Itera la lista y aplica la función 'f' al contenido de cada nodo. Crea una nueva lista resultante de las aplicaciones sucesivas de 'f'.

# ¡Mucha suerte! 😉
