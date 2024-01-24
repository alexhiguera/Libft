/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: columbux <columbux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:21:39 by columbux          #+#    #+#             */
/*   Updated: 2024/01/25 00:27:16 by columbux         ###   ########.fr       */
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
	char	str[6];

	strcpy(str, "HELLO");
	print_test("ft_strchr", ft_strchr(str, 'H') == str
		&& ft_strchr(str, 'L') == str + 2 && ft_strchr(str, 'F') == NULL);
	print_test("ft_strrchr", ft_strrchr(str, 'H') == str
		&& ft_strrchr(str, 'L') == str + 3 && ft_strrchr(str, 'F') == NULL);
	print_test("ft_strnstr 1", ft_strnstr(str, "H", 5) == str
		&& ft_strnstr(str, "L", 5) == str + 2 && ft_strnstr(str, "L", 2) == NULL
		&& ft_strnstr(str, "F", 5) == NULL && ft_strnstr(str, "", 5) == str);
	print_test("ft_strnstr 2", ft_strnstr(str, "LO", 5) == str + 3
		&& ft_strnstr(str, "LLL", 5) == NULL);
	print_test("ft_strnstr 3", ft_strnstr(NULL, NULL, 0) == NULL
		&& ft_strnstr(NULL, "", 5) == NULL
		&& ft_strnstr("HELLO", "H", 0) == NULL);
	
	char	str[10];

	print_test("ft_strlcpy 1", ft_strlcpy(str, "HELLO", 10) == 5
		&& !strcmp(str, "HELLO"));
	print_test("ft_strlcpy 2", ft_strlcpy(str, "HELLO WORLD", 10) == 11
		&& !strcmp(str, "HELLO WOR"));
	strcpy(str, "HELLO");
	print_test("ft_strlcat 1", ft_strlcat(str, " W", 10) == 7
		&& !strcmp(str, "HELLO W"));
	strcpy(str, "HELLO");
	print_test("ft_strlcat 2", ft_strlcat(str, " WORLD", 10) == 11
		&& !strcmp(str, "HELLO WOR"));
	strcpy(str, "HELLO");
	print_test("ft_strlcat 3", ft_strlcat(str, " WORLD HELLO", 10) == 17
		&& !strcmp(str, "HELLO WOR"));
		
	char	*str;

	str = ft_strdup("HELLO");
	print_test("ft_strdup", str != NULL && !strcmp(str, "HELLO"));
	free(str);
	str = ft_strjoin("HELLO", "WORLD");
	print_test("ft_strjoin", !strcmp(str, "HELLOWORLD"));
	free(str);
	print_test("ft_strlen", ft_strlen("") == 0
		&& ft_strlen("HELLOWORLD\n") == 11);
	print_test("ft_strncmp", ft_strncmp("HELLO", "HEY", 5)
		&& !ft_strncmp("HELLO", "HEY", 2) && ft_strncmp("HELLO", "WORLD", 5)
		&& ft_strncmp("HELLO", "", 5));
	str = ft_strtrim("   HELLO WORLD  ", " ");
	print_test("ft_strtrim", str != NULL && !strcmp(str, "HELLO WORLD"));
	free(str);
	str = ft_substr("HELLOWORLD", 3, 4);
	print_test("ft_substr", str != NULL && !strcmp(str, "LOWO"));
	free(str);
	test_str_2();
	test_str_3();
/*-------------------------------test ft_fd*-------------------------------*/
	int		fd[2];
	char	buf[4];
	
	pipe(fd);
	ft_putchar_fd('D', fd[1]);
	ft_putendl_fd("EEZ", fd[1]);
	ft_putnbr_fd(42, fd[1]);
	ft_putnbr_fd(-69, fd[1]);
	ft_putstr_fd("NUTS", fd[1]);
	close(fd[1]);
	read(fd[0], buf, 1);
	print_test("ft_putchar_fd", !memcmp(buf, "D", 1));
	read(fd[0], buf, 4);
	print_test("ft_putendl_fd", !memcmp(buf, "EEZ\n", 4));
	read(fd[0], buf, 2);
	print_test("ft_putnbr_fd 1", !memcmp(buf, "42", 2));
	read(fd[0], buf, 3);
	print_test("ft_putnbr_fd 2", !memcmp(buf, "-69", 3));
	read(fd[0], buf, 4);
	print_test("ft_putstr_fd", !memcmp(buf, "NUTS", 4));
	close(fd[0]);
/*---------------------------test ft_atoi - itoa---------------------------*/
	char	*str;

	print_test("ft_atoi 1", ft_atoi("5") == 5 && ft_atoi("-5") == -5
		&& ft_atoi("0") == 0 && ft_atoi("") == 0 && ft_atoi("-") == 0
		&& ft_atoi(".") == 0 && ft_atoi("aa1") == 0);
	print_test("ft_atoi 2", ft_atoi("+1") == 1 && ft_atoi("++1") == 0
		&& ft_atoi("+-1") == 0 && ft_atoi("--1") == 0);
	print_test("ft_atoi 3", ft_atoi("100") == 100 && ft_atoi("-100") == -100
		&& ft_atoi("5171") == 5171 && ft_atoi("2147483647") == 2147483647
		&& ft_atoi("-2147483648") == -2147483648);
	str = ft_itoa(5);
	print_test("ft_itoa 1", str != NULL && !strcmp(str, "5"));
	free(str);
	str = ft_itoa(2147483647);
	print_test("ft_itoa 2", str != NULL && !strcmp(str, "2147483647"));
	free(str);
	str = ft_itoa(0);
	print_test("ft_itoa 3", str != NULL && !strcmp(str, "0"));
	free(str);
	str = ft_itoa(-2147483648);
	print_test("ft_itoa 4", str != NULL && !strcmp(str, "-2147483648"));
	free(str);
/*-------------------------------test ft_split------------------------------*/
	test_split();
/*-------------------------------test ft_lst*------------------------------*/
t_list	*lst;
	t_list	*lst1;
	t_list	*lst2;
	char	buf[2];

	lst1 = ft_lstnew(buf);
	lst2 = ft_lstnew(buf + 1);
	print_test("ft_lstnew", lst1 != NULL && lst1->content == buf
		&& lst2 != NULL && lst2->content == buf + 1);
	print_test("ft_lstsize 1", ft_lstsize(lst1) == 1 && ft_lstsize(lst2) == 1);
	print_test("ft_lstsize 2", ft_lstsize(NULL) == 0);
	lst = lst1;
	ft_lstadd_front(&lst, lst2);
	print_test("ft_lstadd_front", lst == lst2 && lst->next == lst1);
	lst->next = NULL;
	lst = lst1;
	ft_lstadd_back(&lst, lst2);
	print_test("ft_lstadd_back", lst == lst1 && lst->next == lst2);
	print_test("ft_lstsize 3", ft_lstsize(lst) == 2);
	print_test("ft_lstlast", ft_lstlast(lst) == lst2);
	ft_lstdelone(lst1, &del_c);
	print_test("ft_lstdelone", buf[0] == '0');
	ft_lstclear(&lst2, &del_c);
	print_test("ft_lstclear", lst2 == NULL && buf[1] == '0');

}

static void	free_split(char **split)
{
	size_t	i;

	if (split != NULL)
	{
		i = 0;
		while (split[i] != NULL)
		{
			free(split[i]);
			i++;
		}
		free(split);
	}
}

void	test_split(void)
{
	char	**split;

	split = ft_split("", ' ');
	print_test("ft_split 1", split != NULL && split[0] == NULL);
	free_split(split);
	split = ft_split("     ", ' ');
	print_test("ft_split 2", split != NULL && split[0] == NULL);
	free_split(split);
	split = ft_split("c     g", ' ');
	print_test("ft_split 3", split != NULL
		&& split[0] != NULL && !strcmp(split[0], "c")
		&& split[1] != NULL && !strcmp(split[1], "g")
		&& split[2] == NULL);
	free_split(split);
	split = ft_split(" SPLIT DEEZ NUTS ", ' ');
	print_test("ft_split 4", split != NULL
		&& split[0] != NULL && !strcmp(split[0], "SPLIT")
		&& split[1] != NULL && !strcmp(split[1], "DEEZ")
		&& split[2] != NULL && !strcmp(split[2], "NUTS")
		&& split[3] == NULL);
	free_split(split);
}

static void	del_c(void *ptr)
{
	*((char *)ptr) = '0';
}
