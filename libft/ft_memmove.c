/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:20:41 by ahiguera          #+#    #+#             */
/*   Updated: 2023/10/04 14:32:56 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destiny;
	char	*orin;

	i = 0;
	destiny = (char *)dest;
	orin = (char *)src;
	while (i < n)
	{
		destiny[i] = orin[i];
		i++;
	}
	return (destiny);
}
