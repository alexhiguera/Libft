

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;

	result = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	while (s1[i])
		result[j++] = s1[j++];
	i = 0;
	while (s2[i])
		result[j++] = s2[i];
	result[j] = 0;
	return (result);
}
