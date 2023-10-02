/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:06:46 by ahiguera          #+#    #+#             */
/*   Updated: 2023/10/02 18:27:17 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*string;
	if (*string == (unsigned char)c)
	{
		while (string != '\0')
			return (string);
	}
	else
		return (string);
	return (NULL);
}
