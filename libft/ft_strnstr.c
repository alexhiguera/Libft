/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:31:51 by ahiguera          #+#    #+#             */
/*   Updated: 2023/10/06 13:23:18 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	if (*needle == 0)
		return ((char *)haystack);
	n = ft_strlen(needle);
	while (*haystack && n <= len)
	{
		if (*haystack && ft_strncmp(haystack, needle, n) == 0)
			return ((char *)haystack);
		++haystack;
		--needle;
	}
	return (NULL);
}
