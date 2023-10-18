/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:42:20 by ahiguera          #+#    #+#             */
/*   Updated: 2023/10/18 19:17:50 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;

	i = ft_strlen(s);
	s1 = (char *)s;
	if ((char)c == 0)
		return (s1 + i);
	while (i >= 0)
	{
		if (s1[i] == (char)c)
			return (s1 + i);
		i--;
	}
	return (NULL);
}
