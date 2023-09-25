

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	strncmp(const char *s1, const char *s2, size_t n)
{
	int	first;
	int	second;

	s1 = "hola";
	s2 = "hola mundo";
	first = ft_strlen(s1);
	second = ft_strlen(s2);
	return (first - second);
}

/*#include <string.h>
#include <stdio.h>

 int	main(void)
{
	int	primero;
	int	segundo;
	char	*a;
	char	*s;
	int	 resultado;

	a = "holadfgdfg";
	s = "hola";
	primero = ft_strlen(a);
	segundo = ft_strlen(s);
	resultado = primero - segundo;
	printf("1 es: %s y 2 es: %s , entonces resultado es: %i", a, s, resultado);
	return (0);
} */


/* Compara dos cadenas de caracteres y determinar si son iguales o cuál es
lexicográficamente mayor. Devuelve un valor entero que indica la relación:

if == 0 las cadenas son idénticas.
if < 0 la 1 cadena es menor que la 2.
if > 0 la 1 cadena ese mayor que la 2. */