#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		size;
	int		index;

	size = ft_strlen(src);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	index = -1;
	while (++index < size)
		str[index] = src[index];
	str[index] = '\0';
	return (str);
}
