#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (!dest && !source)
		return (0);
	while (n--)
		*dest++ = *source++;
	return (dst);
}
