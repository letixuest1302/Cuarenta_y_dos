/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:28:20 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:05:43 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	if (n == 0)
		return (0);

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;

	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i ++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    printf("ft_memcmp: %d\n", ft_memcmp("abc", "abd", 3));
    return (0);
}*/