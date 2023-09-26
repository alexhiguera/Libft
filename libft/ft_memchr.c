

 void *ft_memchr(const void *s, int c, int n)
{
	char	*str;
	int	i;

	i = 0;
	str = (char *)s;
	
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return ('\0');
}

/* #include <stdio.h>
#include <string.h>
#include <stddef.h>

int main() {
    char *cadena = "Hello, World!";
    int valor_a_buscar = 'o';
    size_t tamaño = strlen(cadena);

    char *resultado = (char *)memchr(cadena, valor_a_buscar, tamaño);

    if (resultado != NULL) {
        printf("El valor '%c' se encontró en la posición %ld de la cadena.\n", valor_a_buscar, resultado - cadena);
    } else {
        printf("El valor '%c' no se encontró en la cadena.\n", valor_a_buscar);
    }

    return 0;
} */

/* Busca la primera aparición de un valor específico en un bloque de memoria y devuelve la posición

*s -> puntero al inicio del bloque de memoria en el que deseas buscar
c -> caracter a buscar
n -> Es el número de bytes que se deben buscar */