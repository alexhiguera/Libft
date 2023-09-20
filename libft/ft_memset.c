/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:46:23 by ahiguera          #+#    #+#             */
/*   Updated: 2023/09/15 11:49:17 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;

	str = a;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (a);
}

/* int main(void)
{
  char str[20] = "Hello, world!";

  ft_memset(str, 'X', 5);
  printf("%s\n", str);

  return 0;
}
 */
//prueba a cambiar el while de $len por funcion strlen

/*
La función memset() escribe len bytes del valor c (convertido a
 un carácter sin signo) en la cadena b.
argumentos:
b: La dirección de la cadena de memoria que se va a llenar.
c: El valor que se va a escribir en la cadena.
len: El número de bytes que se van a escribir en la cadena.
La función memset() primero convierte el valor c a un carácter
sin signo. Luego, escribe este carácter en cada uno de los len
bytes de la cadena b.
*/

//los primeros len caracters de b sean c