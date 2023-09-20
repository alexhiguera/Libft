/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:20:41 by ahiguera          #+#    #+#             */
/*   Updated: 2023/09/18 14:52:48 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destino;
	char	*origen;

	i = 0;
	destino = (char *)dest;
	origen = (char *)src;
	while (i < n)
	{
		destino[i] = origen[i];
		i++;
	}
}

/* int	main(void)
{
	char	*source;
	char	destination[20];

	source = "pepinillos fritos";
	ft_memmove(destination, source, 20);
	printf("Contenido de destino: %s", destination);
	return (0);
} */

/* La función memmove() copia n bytes desde el área de memoria src al área
de memoria dest. Es posible que las áreas de memoria se superpongan:
la copia se realiza como si los bytes en src se copiaran primero en un
array temporal que no se superpone con src ni con dest, y luego los
bytes se copian desde el array temporal a dest. Copia sin importar
si contienen cadenas de caracteres o cualquier otro tipo de datos.*/