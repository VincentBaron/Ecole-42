#include "libft.h"

char		*strnstr_test(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;

	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}