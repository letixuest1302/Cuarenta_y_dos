/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:25:30 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 10:58:35 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (len --)
			*d++ = *s++;
	}
	else
	{
		while (len --)
			d[len] = s[len];
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char data[] = "abcdef";
    ft_memmove(data + 1, data, 4);
    printf("ft_memmove: %s\n", data);
    return (0);
}*/
