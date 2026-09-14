#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char)chr)
			return ((char *)(&str[len]));
		len--;
	}
	return (NULL);
}
