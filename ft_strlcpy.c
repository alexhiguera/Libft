/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:59:13 by ahiguera          #+#    #+#             */
/*   Updated: 2023/09/18 15:33:52 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

sixe_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	char	*destino;
	char	*origen;
	size_t	i;

	destino = dest;
	origen = src;
	i = 0;
	while (i < destsize)
	{
		dest[i] = src[i];
		i++;
	}
}

int	main(void)
{
	char	*source;
	char	destination[20];

	source = "pepinillos fritos";
	ft_strlcpy(destination, source, 20);
	printf("Contenido de destino: %s", destination);
	return (0);
}

/*ft_stlcpy(destino, origen, tamaño de buffer);
 Función se utiliza para copiar cadenas de caracteres (strings)
de manera segura y controlada para evitar desbordamientos de búfer,
trabaja con cadenas terminadas en nulo*/