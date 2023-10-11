<p align="center">
  <img src="https://repository-images.githubusercontent.com/204142917/82f36f80-66bf-11ea-8c8e-cdb47d752440" alt="imagen de Libft">
</p>

# Descripción
> Libft es una libreria de C |  que ha sido creada para proporcionar un conjunto de funciones útiles que complementan las capacidades de las librerías estándar del lenguaje C. Estas funciones han sido diseñadas para simplificar tareas comunes de programación, ahorrando tiempo y esfuerzo a los desarrolladores.

<p align="center">
  <img src="https://images.vexels.com/media/users/3/166179/isolated/lists/b83d6b47a9502dfaf535087627a8bf96-c-programming-language-icon.png" alt="imagen logo de C">
</p>

## Funciones
|Nº| Función           | Descripción                                                                                          | Sintaxis                             |
|--|-------------------|------------------------------------------------------------------------------------------------------|--------------------------------------|
|  |                   |                            Funciones estandar                                                        |                                      |
|1 | ft_isalpha        |Toma un valor ASCII y devuelve 1 (verdadero) / 0 (falso) si el carácter es una letra.                 | `int ft_isalpha(int c);`             |
|2 | ft_isdigit        |Toma un valor ASCII y devuelve 1 (verdadero) / 0 (falso) si el carácter es un número.                 | `int ft_isdigit(int c);`             |
|3 | ft_isalnum        |Toma un valor ASCII y devuelve 1 (verdadero) / 0 (falso) si el carácter es un alfanumérico.           | `int ft_isalnum(char c);`            |
|4 | ft_ascii          |Toma un valor ASCII y devuelve 1 (verdadero) / 0 (falso) si el carácter es un valorvascii             | `int ft_isascii(int c);`             |
|5 | ft_isprint        |Toma un valor ASCII y devuelve 1 (verdadero) / 0 (falso) si el carácter es un valor imprimible.       | `int ft_isprint(int c);`             |
|6 | ft_strlen         |Calcular la longitud de una cadena de caracteres antes del carácter nulo  '\0'                        | `size_T ft_strlen(char *str);`       |
|7 | ft_memset         |Establece un bloque de memoria con un valor específicado.                                        | `void ft_memset(str, valor, tamaño);`     |
|8 | ft_bzero          |Establece un bloque de memoria con un valor de cero (para borrar o reiniciar la memoria).        | `void ft_memset(str, tamaño);`            |
|9 | ft_memcpy         |Copia un número específico de bytes desde una dirección de memoria a otra.                       | `void ft_memcpy(destino, origen,tamaño);` |
|10| ft_memmove        |Funciona como memcpy y puede copiar datos incluso cuando el área de origen y destino se superponen|`void ft_memmove(destino, origen,tamaño);`|
|11| ft_strlcpy        |Copia una cadena en otra, limitando la cantidad de caracteres para prevenir desbordamientos de búfer.|`size_t ft_strlcpy(char *dest, const char *src, size_t destsize);` |
|12| ft_strlcat        |Concatena una cadena con otra, limitando la cantidad de caracteres para evitar desbordamientos de búfer.|`size_t ft_strlcat(char *dst, const char *src, size_t dstsize);` |
|13| ft_toupper        |Convierte un carácter en mayúscula                                                                    | `int ft_tolower(int c);`             |
|14| ft_tolower        |Convierte un carácter en minúscula                                                                    | `int ft_toupper(int c);`             |
|15| ft_strchr         |Busca la primera ocurrencia de un carácter en una cadena y devuelve un puntero a esa ubicación.    |`char *ft_strchr(const char *s, int c);` |
|16| ft_strrchr        |Busca la última ocurrencia de un carácter en una cadena y devuelve un puntero a esa ubicación.     |`char *ft_strrchr(const char *s, int c);`|
|17| ft_strncmp        |Compara dos cadenas de caracteres y determinar si son iguales o cuál es lexicográficamente mayor.|`ft_strcmp(const char *s1, const char *s2)`|
|18| ft_memchr         |Busca la primera aparición de un valor específico en un bloque de memoria y devuelve la posición      |`void ft_memchr(*pt, valor, tamaño)`  |
|19| ft_memcmp         |Compara dos bloques de memoria y determina si son iguales o no.                   |`int ft_memcmp(const void *s1, const void *s2, size_t n);`|
|20| ft_strnstr        |Busca la primera ocurrencia de una subcadena en una cadena dada, limitando la búsqueda a un número específico de caracteres.|`char *ft_strnstr(const char *haystack, const char *needle, size_t len);`|
|21| ft_atoi           |Convierte una cadena que representa un número en su equivalente entero.                               |`int ft_atoi(const char *str);`       |
|22| ft_calloc         |Asigna un bloque de memoria con un número específico de elementos, inicializándolos en cero.   |`void *ft_calloc(size_t count, size_t size);`|
|23| ft_strdup         |Duplica una cadena de caracteres existente y devuelve un nuevo puntero a la copia.                    |   `char	*ft_strdup(const char *s1);` |
|  |                   |                            Funciones adicionales                                                     |                                      |
|24| ft_substr         |Reserva (con malloc(3)) y devuelve una substring de la string ’s’. La substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’.|`char *ft_substr(char const *s, unsigned int start, size_t len);`|
|25| ft_strjoin        |Reserva (con malloc(3)) y devuelve una nueva string, formada por la concatenación de ’s1’ y ’s2’.|`char *ft_strjoin(char const *s1, char const *s2);`|
|26| ft_strtrim        |Elimina todos los caracteres de la string ’set’ desde el principio y desde el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’. La string resultante se devuelve con una reserva de malloc(3)|`char *ft_strtrim(char const *s1, char const *set);`|
|27| ft_split          |Reserva (utilizando malloc(3)) un array de strings resultante de separar la string ’s’ en substrings utilizando el caracter ’c’ como delimitador. El array debe terminar con un puntero NULL.|`char **ft_split(char const *s, char c);`|
|28|ft_itoa            |Utilizando malloc(3), genera una string que represente el valor entero recibido como argumento. Los números negativos tienen que gestionarse.|`char *ft_itoa(int n);`|
|29|ft_strmapi         |A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada carácter dentro de ’s’ y el propio carácter. Genera una nueva string con el resultado del uso sucesivo de ’f’|`char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`|
|30|ft_striteri        |A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada carácter dentro de ’s’ y la dirección del propio carácter, que podrá modificarse si es necesario.|`void ft_striteri(char *s, void (*f)(unsigned int, char*));`|
|31| ft_putchar_fd     |Envía el carácter ’c’ al file descriptor especificado.                                                 |`void ft_putchar_fd(char c, int fd);`|
|32| ft_putstr_fd      |Envía la string ’s’ al file descriptor especificado.                                                   |`void ft_putstr_fd(char *s, int fd);`|
|33| ft_putendl_fd     | Envía la string ’s’ al file descriptor dado, seguido de un salto de linea.                           |`void ft_putendl_fd(char *s, int fd);`|
|34| ft_putnbr_fd      | Envía el número ’n’ al file descriptor dado.                                                          |`void ft_putnbr_fd(int n, int fd);`  |
|  |                   |----------------------------BONUS----------------------------                                          |                                     |
|35| ft_lstnew         |Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’ se inicializa con el contenido del parámetro ’content’. La variable ’next’, con NULL.|`t_list *ft_lstnew(void *content);`|
|36| ft_lstadd_front   | Añade el nodo ’new’ al principio de la lista ’lst’.                                      |`void ft_lstadd_front(t_list **lst, t_list *new);`|
|37| ft_lstsize        |Cuenta el número de nodos de una lista.                                                                |`int ft_lstsize(t_list *lst);`       |
|38| ft_lstlast        |Devuelve el último nodo de la lista.                                                                   | `t_list *ft_lstlast(t_list *lst);`  |
|39| ft_lstadd_back    |Añade el nodo ’new’ al final de la lista ’lst’.                                            |`void ft_lstadd_back(t_list **lst, t_list *new);`|
|40| ft_lstdelone      |Toma como parámetro un nodo ’lst’ y libera la memoria del contenido utilizando la función ’del’ dada como parámetro, además de liberar el nodo. La memoria de ’next’ no debe liberarse.| `void ft_lstdelone(t_list *lst, void (*del)(void *));`|
|41| ft_lstclear       |Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.             |`void ft_lstclear(t_list **lst, void (*del)(void *));`|
|42| ft_lstmap         |Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo. Crea una lista resultante de la aplicación correcta y sucesiva de la función ’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar el contenido de un nodo, si hace falta.|`t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`|


## Creador

@alexhiguera