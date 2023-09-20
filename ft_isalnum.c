/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:46:35 by ahiguera          #+#    #+#             */
/*   Updated: 2023/09/12 17:58:34 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(char c)
{
	if (c >= '0' && c <= 'z')
		return (1);
	return (0);
}

int	main(void)
{
	printf("resultado; %i", ft_isalnum('1'));
	return (0);
}
//hacer tests en resultado con valores fuera del rango y mas digitos