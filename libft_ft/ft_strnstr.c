/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:28:36 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/30 15:37:26 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	*big_index;
	size_t	little_index;

	if (little[0] == '\0')
		return ((char *)big);
	
	big_index = 0;
	
	while (big[big_index] != '\0' && big_index < len)
	{
		little_index = 0;

		while (neddle[little_index] != '\0'
				&& (big_index + needdle_index) < len
				&& big[big_index ++ little_index] == little[little_index])
		{
			little_index ++;
		}

		if (little[little_index] == '\0')
			return ((char *)&big[big_index]);
		
		big_index ++;
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