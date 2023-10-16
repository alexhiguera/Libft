/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:46:24 by ahiguera          #+#    #+#             */
/*   Updated: 2023/10/16 10:46:52 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counter(char const *str, char c)
{
	size_t	i;
	size_t	total;

	i = 0;
	total = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			total++;
		i++;
	}
	return (total);
}

static char	*copy_word(char *str, char c, size_t *i)
{
	char	*result;
	size_t	len;

	while (str[*i] == c)
		(*i)++;
	len = 0;
	while (str[*i] != '\0' && str[*i + len] != c)
		len++;
	result = ft_substr(str, *i, len);
	*i += len;
	return (result);
}

static void	separate(char *str, char **split, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		split[j] = copy_word(str, c, &i);
		while (str[i] == c)
			i++;
	}
}

static void	free(char **clear)
{
	size_t	i;

	i = 0;
	while (clear[i])
	{	
		free (clear[i]);
		i++;
	}
	free (clear);
}

char	**ft_split(char const *str, char c)
{
	char	**result;
	size_t	num_words;

	num_words = counter(str, c);
	result = (char **)malloc(sizeof(char *) * (num_words + 1));
	separate(str, result, c);
	result[num_words] = NULL;
	return (result);
}
