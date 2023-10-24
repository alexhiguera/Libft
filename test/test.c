/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:21:39 by columbux          #+#    #+#             */
/*   Updated: 2023/10/24 16:05:27 by columbux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../repo/libft.h"
#include <stdio.h>

int main(void)
{
/*-------------------------------test ft_is*-------------------------------*/
	// ft_isalpha
	print_ok("ft_isalpha", ft_isalpha('C') && ft_isalpha('c')
		&& ft_isalpha('z') && !ft_isalpha('4') && !ft_isalpha('@')
		&& !ft_isalpha(' ') && !ft_isalpha(2048 + 'c') && !ft_isalpha(2048));

	//ft_isalnum
	print_ok("ft_isalnum", ft_isalnum('C') && ft_isalnum('c')
		&& ft_isalnum('z') && ft_isalnum('4') && !ft_isalnum('@')
		&& !ft_isalnum(' ') && !ft_isalnum(2048 + 'c') && !ft_isalnum(2048));

	//ft_isascii
	print_ok("ft_isascii", ft_isascii('C') && ft_isascii('c')
		&& ft_isascii('z') && ft_isascii('4') && ft_isascii('@')
		&& ft_isascii(' ') && !ft_isascii(2048 + 'c') && !ft_isascii(2048));

	//fT_isdigit
	print_ok("ft_isdigit", !ft_isdigit('C') && !ft_isdigit('c')
		&& !ft_isdigit('z') && ft_isdigit('4') && !ft_isdigit('@')
		&& !ft_isdigit(' ') && !ft_isdigit(2048 + '4') && !ft_isdigit(2048));

	//ft_isprint
	print_ok("ft_isprint", ft_isprint('C') && ft_isprint('c')
		&& ft_isprint('4') && !ft_isprint('\t') && ft_isprint('@')
		&& ft_isprint(' ') && !ft_isprint(2048 + 'c') && !ft_isprint(2048)
		&& !ft_isprint('\0'));

/*-------------------------------test ft_to*-------------------------------*/

	//ft_tolower
	print_ok("ft_tolower", ft_tolower('C') == 'c' && ft_tolower('c') == 'c'
	&& ft_tolower('4') == '4' && ft_tolower(';') == ';' &&
	ft_tolower(' ') == ' ' && ft_tolower('\t') == '\t');

	//ft_toupper
	print_ok("ft_toupper", ft_toupper('C') == 'C' && ft_toupper('c') == 'C'
	&& ft_toupper('4') == '4' && ft_toupper(';') == ';' && ft_toupper(' ') == ' '
	&& ft_toupper('\t') == '\t');

/*-------------------------------test ft_mem*------------------------------*/

/*-------------------------------test ft_str*------------------------------*/

/*-------------------------------test ft_fd*-------------------------------*/

/*---------------------------test ft_atoi - itoa---------------------------*/

/*-------------------------------test ft_split------------------------------*/

/*-------------------------------test ft_lst*------------------------------*/


}