/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:33:02 by ahiguera          #+#    #+#             */
/*   Updated: 2023/10/18 15:33:55 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;

	if (str == NULL)
		return (NULL);
	str_len = ft_strlen(str);
	if (str_len <= start)
		len = 0;
	else if (str_len <= start + len)
		len = str_len - start;
	substr = (char *)malloc((len + 1) * sizeof (char));
	if (substr == NULL)
		return (NULL);
	ft_memcpy(substr, str + start, len);
	substr[len] = '\0';
	return (substr);
}
