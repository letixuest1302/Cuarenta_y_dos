/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:24:59 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 10:54:14 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	d = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i ++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    char dest[20];
    ft_memcpy(dest, "Libft42", 7);
    dest[7] = '\0';
    printf("ft_memcpy: %s (Esperado: Libft42)\n", dest);
    return (0);
}*/
