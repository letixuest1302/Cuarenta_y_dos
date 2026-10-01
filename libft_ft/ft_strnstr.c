/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:28:36 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 13:17:37 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	*big_idx;
	size_t	little_idx;
	size_t	k;

	if (!big && len == 0)
		return (NULL);
	if (!*little)
		return ((char *)big);
	k = 0;
	big_idx = &k;
	while (big[*big_idx] && *big_idx < len)
	{
		little_idx = 0;
		while (little[little_idx] && big[*big_idx + little_idx]
			== little[little_idx] && (*big_idx + little_idx) < len)
			little_idx++;
		if (!little[little_idx])
			return ((char *)&big[*big_idx]);
		(*big_idx)++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
    printf("ft_strnstr: %s (Espero: bar baz)\n"));
	printf("ft_strnstr: %s ("bar baz", "bar", 8));
    return (0);
}*/
