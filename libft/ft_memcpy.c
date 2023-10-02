/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:27:01 by ahiguera          #+#    #+#             */
/*   Updated: 2023/10/02 18:21:53 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
