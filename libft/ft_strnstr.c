#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	size;

	if (!(*substr))
		return ((char *)str);
	size = ft_strlen(substr);
	while (*str && (size <= len--))
	{
		if (ft_strncmp(str, substr, size) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
