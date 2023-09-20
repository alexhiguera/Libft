/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:59:13 by ahiguera          #+#    #+#             */
/*   Updated: 2023/09/20 14:04:56 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize != 0)
	{
		while (src[i] != '0' && i < (destsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
}

/* int	main(void)
{
	char	*source;
	char	destination[20];

	printf("Contenido de destino: %s", source);
	source = "pepinillos fritos";
	ft_strlcpy(destination, source, 20);
	printf("Contenido de destino: %s", destination);
	return (0);
} */

/*ft_stlcpy(destino, origen, tamaño de buffer);
 Función se utiliza para copiar cadenas de caracteres (strings)
de manera segura y controlada para evitar desbordamientos de búfer,
trabaja con cadenas terminadas en nulo*/