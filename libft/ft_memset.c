#include "libft.h"

void	*ft_memset(void *str, int chr, size_t len)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (len--)
		*(s++) = chr;
	return (str);
}
