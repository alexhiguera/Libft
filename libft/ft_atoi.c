/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:39:44 by ahiguera          #+#    #+#             */
/*   Updated: 2023/09/22 19:56:56 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	rest;

	i = 0;
	sign = 1;
	rest = 0;
	while (*str == ' ' || *str == '+')
		str++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		rest = rest * 10 + (rest - '0');
		str++;
	}
	return (rest * sign);
}

int	main(void)
{
	char	*string;
	int		number;

	string = "-123456789";
	number = ft_atoi(string);
	printf("El valor entero de la cadena \"%s\" es %d.\n", string, number);
	return (0);
}
