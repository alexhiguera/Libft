/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:36:24 by ahiguera          #+#    #+#             */
/*   Updated: 2023/09/20 17:22:24 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void)
{
	printf("resultado: %i", ft_toupper(98));
	return (0);
}

/* Convierte una letra en minúscula en
la letra en mayúscula. El argumento debe
ser representable como un carácter sin signo o tener el
valor de EOF (End of File). */