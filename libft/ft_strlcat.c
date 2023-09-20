/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:29:59 by ahiguera          #+#    #+#             */
/*   Updated: 2023/09/20 15:34:14 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	unsigned int	dst_len;

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

int	main(void)
{
	char	source;
	char	destiny;

	source = "funciona";
	printf("frasecilla: %s \n resultado: %s \n", source, destiny);
	return (0);
}
