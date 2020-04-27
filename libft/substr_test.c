#include "libft.h"

char		*substr_test(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		cpy;
	size_t	lalen;

	if (s == NULL)
		return (NULL);
	lalen = ft_strlen((char *)s);
	if (start >= lalen)
		len = 0;
	else
		len = lalen - start < len ? lalen - start : len;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == 0)
		return (NULL);
	cpy = 0;
	while (len)
	{
		res[cpy] = s[start];
		cpy++;
		start++;
		len--;
	}
	res[cpy] = '\0';
	return (res);
}