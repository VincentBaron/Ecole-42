#include "libft.h"

size_t		strlcat_test(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	len_src;

	len = 0;
	len_src = ft_strlen((char *)src);
	while (dest[len] && len < size)
		len = len + 1;
	i = len;
	while (src[len - i] && len + 1 < size)
	{
		dest[len] = src[len - i];
		len = len + 1;
	}
	if (i < size)
		dest[len] = '\0';
	printf ("test dest: %s\n", dest);
	return (len_src + i);
}