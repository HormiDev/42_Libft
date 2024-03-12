# 42_Libft

## Hola🤗 bienvenid@ a 42_Libft, mi biblioteca de C creada como parte del primer proyecto de Campus 42.

## Las funciones que he implementado son:

- `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`: Estas funciones comprueban si un carácter dado tiene ciertas propiedades (alfabético, dígito, alfanumérico, ASCII, imprimible).
- `strlen`: Calcula la longitud de una cadena de caracteres.
- `memset`, `bzero`: Estas funciones manipulan los bytes en la memoria.
- `memcpy`, `memmove`: Estas funciones copian los bytes entre las regiones de memoria.
- `strlcpy`, `strlcat`: Estas funciones copian y concatenan cadenas respectivamente.
- `toupper`, `tolower`: Estas funciones convierten los caracteres de minúsculas a mayúsculas y viceversa.
- `strchr`, `strrchr`: Estas funciones buscan un carácter en una cadena.
- `strncmp`, `memchr`, `memcmp`, `strnstr`: Estas funciones comparan cadenas o regiones de memoria, buscan un carácter en una región de memoria, y buscan una subcadena dentro de una cadena.
- `atoi`: Esta función convierte una cadena en un entero.

Además, he implementado las siguientes funciones que requieren el uso de `malloc` para asignar memoria dinámicamente:

- `calloc`: Esta función asigna memoria para un arreglo de elementos de un cierto tamaño y los inicializa a cero.
- `strdup`: Esta función crea una copia nueva de una cadena existente.

## Funciones Adicionales

- Manipulación de cadenas:
  - `ft_substr`: Obtiene una subcadena de una cadena.
  - `ft_strjoin`: Une dos cadenas.
  - `ft_strtrim`: Recorta los caracteres especificados del inicio y del final de una cadena.
  - `ft_split`: Divide la cadena usando el carácter dado como delimitador.
  - `ft_strmapi`: Aplica la función dada a cada carácter de la cadena para crear una nueva cadena.
  - `ft_striteri`: Aplica la función dada a cada carácter de la cadena.

- Conversión de datos:
  - `ft_itoa`: Convierte un número entero en una cadena.

- Salida de datos:
  - `ft_putchar_fd`: Escribe el carácter dado en el descriptor de archivo dado.
  - `ft_putstr_fd`: Escribe la cadena dada en el descriptor de archivo dado.
  - `ft_putendl_fd`: Escribe la cadena dada seguida de un salto de línea en el descriptor de archivo dado.
  - `ft_putnbr_fd`: Escribe el número entero dado en el descriptor de archivo dado.

## Funciones Bonus

- `ft_lstnew`: Crea un nuevo nodo.
- `ft_lstadd_front`: Agrega el nuevo nodo al principio de la lista.
- `ft_lstsize`: Cuenta el número de nodos en una lista.
- `ft_lstlast`: Devuelve el último nodo de la lista.
- `ft_lstadd_back`: Agrega el nuevo nodo al final de la lista.
- `ft_lstdelone`: Elimina y libera el nuevo nodo.
- `ft_lstclear`: Elimina y libera el primer nodo de la lista y todos los sucesores.
- `ft_lstiter`: Itera la lista y aplica la función 'f' al contenido de cada nodo.
- `ft_lstmap`: Itera la lista y aplica la función 'f' al contenido de cada nodo. Crea una nueva lista resultante de las aplicaciones sucesivas de 'f'.

# ¡Mucha suerte! 😉
