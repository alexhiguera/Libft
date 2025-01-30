<p align="center">
  <img src="https://repository-images.githubusercontent.com/204142917/82f36f80-66bf-11ea-8c8e-cdb47d752440" alt="imagen de Libft">
</p>

![GitHub License](https://img.shields.io/github/license/alexhiguera/libft) ![GitHub release date](https://img.shields.io/github/release-date-pre/alexhiguera/libft) ![GitHub License](https://badgen.net/github/tag/alexhiguera/libft) ![GitHub repo size](https://img.shields.io/github/repo-size/alexhiguera/libft?color=militar%20green)

# Descripción
 Libft es una libreria de C |  que ha sido creada para proporcionar un conjunto de funciones útiles que complementan las capacidades de las librerías estándar del lenguaje C. Estas funciones han sido diseñadas para simplificar tareas comunes de programación, ahorrando tiempo y esfuerzo a los desarrolladores.


## Funciones
| Nº  | Función       | Descripción                                                                                | Sintaxis                                                      |
|-----|---------------|--------------------------------------------------------------------------------------------|---------------------------------------------------------------|
| **Funciones estándar** |               |                                                                         |                                                               |
| 1   | ft_isalpha    | Verifica si un carácter es una letra.                                                      | `int ft_isalpha(int c);`                                      |
| 2   | ft_isdigit    | Verifica si un carácter es un dígito numérico.                                             | `int ft_isdigit(int c);`                                      |
| 3   | ft_isalnum    | Verifica si un carácter es alfanumérico (letra o dígito).                                  | `int ft_isalnum(char c);`                                     |
| 4   | ft_isascii    | Verifica si un carácter es un valor ASCII válido.                                          | `int ft_isascii(int c);`                                      |
| 5   | ft_isprint    | Verifica si un carácter es imprimible.                                                     | `int ft_isprint(int c);`                                      |
| 6   | ft_strlen     | Calcula la longitud de una cadena hasta el carácter nulo (`\0`).                           | `size_t ft_strlen(char *str);`                                |
| 7   | ft_memset     | Establece un bloque de memoria con un valor dado.                                          | `void *ft_memset(void *str, int valor, size_t tamaño);`       |
| 8   | ft_bzero      | Establece un bloque de memoria a cero.                                                     | `void ft_bzero(void *s, size_t len);`                         |
| 9   | ft_memcpy     | Copia una cantidad específica de bytes de una dirección a otra.                            | `void ft_memcpy(void *dest, const void *src, size_t tamaño);`  |
| 10  | ft_memmove    | Copia datos manejando superposiciones entre origen y destino.                              | `void ft_memmove(void *dest, const void *src, size_t tamaño);` |
| 11  | ft_strlcpy    | Copia una cadena limitando la cantidad de caracteres para evitar desbordamientos.          | `size_t ft_strlcpy(char *dest, const char *src, size_t destsize);` |
| 12  | ft_strlcat    | Concatena una cadena limitando la cantidad de caracteres para evitar desbordamientos.      | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize);` |
| 13  | ft_toupper    | Convierte un carácter a mayúscula.                                                         | `int ft_toupper(int c);`                                      |
| 14  | ft_tolower    | Convierte un carácter a minúscula.                                                         | `int ft_tolower(int c);`                                      |
| 15  | ft_strchr     | Busca la primera ocurrencia de un carácter en una cadena.                                  | `char *ft_strchr(const char *s, int c);`                      |
| 16  | ft_strrchr    | Busca la última ocurrencia de un carácter en una cadena.                                   | `char *ft_strrchr(const char *s, int c);`                     |
| 17  | ft_strncmp    | Compara dos cadenas hasta un número máximo de caracteres.                                  | `int ft_strncmp(const char *s1, const char *s2, size_t n);`   |
| 18  | ft_memchr     | Busca un valor específico en un bloque de memoria.                                         | `void *ft_memchr(const void *pt, int valor, size_t tamaño);`  |
| 19  | ft_memcmp     | Compara dos bloques de memoria.                                                            | `int ft_memcmp(const void *s1, const void *s2, size_t n);`    |
| 20  | ft_strnstr    | Busca una subcadena en una cadena, limitando la búsqueda.                                  | `char *ft_strnstr(const char *haystack, const char *needle, size_t len);` |
| 21  | ft_atoi       | Convierte una cadena a su equivalente numérico entero.                                     | `int ft_atoi(const char *str);`                               |
| 22  | ft_calloc     | Asigna memoria e inicializa el contenido a cero.                                           | `void *ft_calloc(size_t count, size_t size);`                 |
| 23  | ft_strdup     | Duplica una cadena y devuelve un nuevo puntero a ella.                                     | `char *ft_strdup(const char *s1);`                            |
| **Funciones adicionales** |               |                                                                      |                                                               |
| 24  | ft_substr     | Devuelve un substring comenzando desde un índice específico.                               | `char *ft_substr(char const *s, unsigned int start, size_t len);` |
| 25  | ft_strjoin    | Concatena dos cadenas y devuelve el resultado.                                             | `char *ft_strjoin(char const *s1, char const *s2);`           |
| 26  | ft_strtrim    | Elimina caracteres de un string hasta encontrar uno no incluido en el conjunto dado.       | `char *ft_strtrim(char const *s1, char const *set);`          |
| 27  | ft_split      | Separa una cadena en un array de subcadenas usando un delimitador.                         | `char **ft_split(char const *s, char c);`                     |
| 28  | ft_itoa       | Convierte un número entero a su representación en cadena.                                  | `char *ft_itoa(int n);`                                       |
| 29  | ft_strmapi    | Aplica una función a cada carácter de un string y devuelve el resultado en un nuevo string.| `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` |
| 30  | ft_striteri   | Aplica una función a cada carácter de una cadena, pasando la dirección del carácter.       | `void ft_striteri(char *s, void (*f)(unsigned int, char*));`  |
| 31  | ft_putchar_fd | Escribe un carácter en un descriptor de archivo.                                           | `void ft_putchar_fd(char c, int fd);`                         |
| 32  | ft_putstr_fd  | Escribe una cadena en un descriptor de archivo.                                            | `void ft_putstr_fd(char *s, int fd);`                         |
| 33  | ft_putendl_fd | Escribe una cadena en un descriptor de archivo, seguida de un salto de línea.              | `void ft_putendl_fd(char *s, int fd);`                        |
| 34  | ft_putnbr_fd  | Escribe un número entero en un descriptor de archivo.                                      | `void ft_putnbr_fd(int n, int fd);`                           |
| **BONUS**            |               |                                                                           |                                                               |
| 35  | ft_lstnew     | Crea un nuevo nodo con un contenido dado.                                                  | `t_list *ft_lstnew(void *content);`                           |
| 36  | ft_lstadd_front | Añade un nodo al principio de una lista enlazada.                                        | `void ft_lstadd_front(t_list **lst, t_list *new);`            |
| 37  | ft_lstsize    | Cuenta el número de nodos en una lista enlazada.                                           | `int ft_lstsize(t_list *lst);`                                |
| 38  | ft_lstlast    | Devuelve el último nodo de una lista enlazada.                                             | `t_list *ft_lstlast(t_list *lst);`                            |
| 39  | ft_lstadd_back | Añade un nodo al final de una lista enlazada.                                             | `void ft_lstadd_back(t_list **lst, t_list *new);`             |
| 40  | ft_lstdelone  | Libera el contenido de un nodo y el nodo mismo.                                            | `void ft_lstdelone(t_list *lst, void (*del)(void *));`        |
| 41  | ft_lstclear   | Elimina y libera todos los nodos de una lista enlazada.                                    | `void ft_lstclear(t_list **lst, void (*del)(void *));`        |
| 42  | ft_lstiteri   | Aplica una función a cada nodo de una lista enlazada.                                      | `void ft_lstiteri(t_list *lst, void (*f)(unsigned int, void *));` |
| 43  | ft_lstmap     | Aplica una función a cada nodo de una lista y crea una nueva lista con los resultados.     | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` |

---
