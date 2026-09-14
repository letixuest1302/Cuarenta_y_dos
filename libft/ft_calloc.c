#include "libft.h"

void	*ft_calloc(size_t num_blocks, size_t block_size)
{
	char	*str;

	str = (char *)malloc(num_blocks * block_size);
	if (!str)
		return (NULL);
	ft_bzero(str, num_blocks * block_size);
	return (str);
}
