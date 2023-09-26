/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:42:20 by ahiguera          #+#    #+#             */
/*   Updated: 2023/09/21 14:09:33 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*string;

	string = (char *)s;
	if (string == (unsigned char)c)
	{
		while (string = '\0')
			return (string);
	}
}