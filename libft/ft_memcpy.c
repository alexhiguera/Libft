/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:27:01 by ahiguera          #+#    #+#             */
/*   Updated: 2023/09/18 15:33:33 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	const char		*origen;
	char			*dest;

	i = 0;
	origen = (char *)src;
	dest = dst;
	while (i < n && (src || dst))
	{
		dest[i] = origen[i];
		i++;
	}
	return (dst);
}

/* int main() {
    char origen[] = "Hola, mundo!";
    char destino[20]; // Debe ser lo suficientemente grande para contener la cadena copiada.

    // Usando memcpy para copiar la cadena desde origen a destino.
    ft_memcpy(destino, origen, sizeof(origen));

    // Imprimir el resultado.
    printf("Origen: %s\n", origen);
    printf("Destino: %s\n", destino);

    return 0;
} */