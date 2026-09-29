/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:28:36 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:06:17 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_index;
	size_t	needle_index;

	if (needle[0] == '\0')
		return ((char *)haystack);
	
	haystack_index = 0;
	
	while (haystack[haystack_index] != '\0' && haystack_index < len)
	{
		needle_index = 0;

		while (neddle[needle_index] != '\0'
				&& (haystack_index + needdle_index) < len
				&& haystack[haystack_index ++ needle_index] == needle[needle_index])
		{
			needle_index ++;
		}

		if (needle[needle_index] == '\0')
			return ((char *)&haystack[haystack_index]);
		
		haystack_index ++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
    printf("ft_strnstr: %s (Esperado: bar baz)\n", ft_strnstr("foo bar baz", "bar", 8));
    return (0);
}*/