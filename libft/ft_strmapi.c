
#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int	i;
    char			*result;
	size_t			len;

	len = ft_strlen(s);
    result = malloc((len + 1) * sizeof(char));
    if (!result)
        return (NULL);
    i = 0;
    while (i < len)
    {
        result[i] = (*f)(i, s[i]);
        i++;
    }
    result[i] = 0;
    return (result);
}