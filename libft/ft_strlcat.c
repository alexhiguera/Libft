/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:29:59 by ahiguera          #+#    #+#             */
/*   Updated: 2023/10/16 17:56:54 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	size_t			dst_len;

	i = ft_strlen(dst);
	dst_len = ft_strlen(dst);
	j = 0;
	if (dstsize && ft_strlen(dst) <= dstsize)
	{
		while (src[j] != '0' && i < (dstsize - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}
	if (dst[i] == '\0')
		dst_len = 0;
	if (dstsize < dst_len)
		dst_len = dstsize;
	return (dst_len + ft_strlen((char *)src));
}
