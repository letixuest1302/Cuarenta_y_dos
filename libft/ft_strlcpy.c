#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	lenght;

	lenght = ft_strlen(src);
	if (dstsize)
	{
		idx = 0;
		while ((*src) && (idx < (dstsize - 1)))
			dst[idx++] = *src++;
		dst[idx] = '\0';
	}
	return (lenght);
}
