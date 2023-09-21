/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:06:46 by ahiguera          #+#    #+#             */
/*   Updated: 2023/09/21 12:36:41 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

/* char	*ft_strchr(const char *s, int c)
{
	char	*string;

	string = (char *)s;
	while (string != '\0')
	{
		if (*string == (unsigned char)c)
			retunr (string);
	}
	if (*string == (unsigned char)c)
		retunr (string);
	return (NULL);
} */

char	*ft_strchr(const char *s, int c)
{
	char	*string;
	/* string == (char *)s; */
	if (*string == (unsigned char)c)
	{
		while (string != '\0')
			return (string);
	}
	else
		return (string);
	return (NULL);
}

/* int	main(void)
{
	char	*cadena;

	cadena = "funciona";
	ft_strchr(cadena, );
	printf("resultado de %s es: %i", cadena, a);
	return (0);
} */

/* s -> string y c -> caracter */
/*La función strchr() busca la primera vez que aparece el
carácter 'c' (convertido a tipo char) en la cadena a la
que apunta 's'. El carácter nulo de terminación se considera
como parte de la cadena, por lo tanto, si 'c' es '\0', la
función buscará el carácter nulo de terminación.*/