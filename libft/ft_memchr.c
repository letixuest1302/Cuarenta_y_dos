#include "libft.h"

void	*ft_memchr(const void *str, int chr, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n--)
	{
		if (*(ptr++) == (unsigned char)chr)
			return ((void *)(ptr - 1));
	}
	return (NULL);
}
