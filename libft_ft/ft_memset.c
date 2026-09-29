/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:24:22 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:03:40 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i ++;
	}
	return (b);
}
/*
#include <stdio.h>

int main(void)
{
    char str[15] = "Hello World";
    ft_memset(str, '.', 5);
    printf("ft_memset: %s (Esperado: ..... World)\n", str);
    return (0);
}*/