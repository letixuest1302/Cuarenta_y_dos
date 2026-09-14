#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	int	idx;

	idx = 0;
	while ((size != 0) && (str1[idx] != '\0') && (str1[idx] == str2[idx]))
	{
		idx++;
		size--;
	}
	if (size != 0)
		return ((unsigned char)str1[idx] - (unsigned char)str2[idx]);
	else
		return (0);
}
