#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	last;

	if (ft_strlen(s1) < ft_strlen(set))
		return (ft_strdup(""));
	if (!set)
		return (NULL);
	begin = 0;
	while ((s1[begin] != '\0') && (ft_strchr(set, s1[begin])))
		begin++;
	last = ft_strlen(s1);
	while ((begin < last) && (ft_strchr(set, s1[last - 1])))
		last--;
	return (ft_substr(s1, begin, last - begin));
}
