/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:28:05 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:05:28 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c; size_t n)
{
	size_t	i;
	const unsigned char	*ptr;
	
	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
    char *res = ft_memchr("Hello 42", 'o', 8);
    printf("ft_memchr: %s (Esperado: o 42)\n", res);
    return (0);
}*/