#include "libft.h"

size_t	strlcpy_test(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	if (!src)
		return (0);
	while (src[k] != '\0')
		k++;
	if (size == 0)
		return (k);
	while (dst[j])
		j++;
	while (src[i] && i < size - 1)
	{
		if (i < size - 1 && size > 0)
			dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (k);
}