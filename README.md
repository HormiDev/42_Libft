# 42_Libft

## Hola🤗 bienvenid@ a 42_Libft, mi biblioteca de C creada como parte del primer proyecto de Campus 42. 
# `125/100`

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
  - `substr`: Obtiene una subcadena de una cadena.
  - `strjoin`: Une dos cadenas.
  - `strtrim`: Recorta los caracteres especificados del inicio y del final de una cadena.
  - `split`: Divide la cadena usando el carácter dado como delimitador.
  - `strmapi`: Aplica la función dada a cada carácter de la cadena para crear una nueva cadena.
  - `striteri`: Aplica la función dada a cada carácter de la cadena.

- Conversión de datos:
  - `itoa`: Convierte un número entero en una cadena.

- Salida de datos:
  - `putchar_fd`: Escribe el carácter dado en el descriptor de archivo dado.
  - `putstr_fd`: Escribe la cadena dada en el descriptor de archivo dado.
  - `putendl_fd`: Escribe la cadena dada seguida de un salto de línea en el descriptor de archivo dado.
  - `putnbr_fd`: Escribe el número entero dado en el descriptor de archivo dado.

## Funciones Bonus:
  - `lstnew`: Crea un nuevo nodo.
  - `lstadd_front`: Agrega el nuevo nodo al principio de la lista.
  - `lstsize`: Cuenta el número de nodos en una lista.
  - `lstlast`: Devuelve el último nodo de la lista.
  - `lstadd_back`: Agrega el nuevo nodo al final de la lista.
  - `lstdelone`: Elimina y libera el nuevo nodo.
  - `lstclear`: Elimina y libera el primer nodo de la lista y todos los sucesores.
  - `lstiter`: Itera la lista y aplica la función 'f' al contenido de cada nodo.
  - `lstmap`: Itera la lista y aplica la función 'f' al contenido de cada nodo. Crea una nueva lista resultante de las aplicaciones sucesivas de 'f'.


# ¡Mucha suerte! 😉
