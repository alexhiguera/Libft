/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:05:21 by ahiguera          #+#    #+#             */
/*   Updated: 2023/09/18 12:19:11 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*a;

	i = -1;
	a = s;
	while (++i < n)
		a[i] = '\0';
}

/* int	main(void)
{
	char	buffer[20];

	strcpy(buffer, "hola mundo");
	printf("contenido del buffer antes de bzero: %s\n", buffer);

	ft_bzero(buffer, sizeof(buffer));

	printf("contenido del buffer tras bzero: %s\n", buffer);
	return (0);
}
 */
/* sirve para llenar con ceros una región de memoria, lo que puede
utilizarse para borrar o inicializar un bloque de memoria.  */