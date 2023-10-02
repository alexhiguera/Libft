/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:20:41 by ahiguera          #+#    #+#             */
/*   Updated: 2023/10/02 18:23:21 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
