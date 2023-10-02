/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:46:23 by ahiguera          #+#    #+#             */
/*   Updated: 2023/10/02 18:25:54 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = a;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (a);
}
