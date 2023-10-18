/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:33:02 by ahiguera          #+#    #+#             */
/*   Updated: 2023/10/16 14:01:19 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	max_len;

	max_len = ft_strlen(str);
	if (max_len < start)
		max_len -= start;
	i = 0;
	substr = (char *)malloc((len + 1) * sizeof (char));
	if (substr == NULL)
		return (NULL);
	while (str[i] != '\0' && (i > start && max_len < len))
		return (0);
	substr[i] = 0;
	return (substr);
}
