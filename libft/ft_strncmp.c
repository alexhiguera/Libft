/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:34:17 by ahiguera          #+#    #+#             */
/*   Updated: 2023/09/27 14:45:54 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strncmp(const char *s1, const char *s2, size_t n)
{
	int	first;
	int	second;

	s1 = "hola";
	s2 = "hola mundo";
	first = ft_strlen(s1);
	second = ft_strlen(s2);
	return (first - second);
}
