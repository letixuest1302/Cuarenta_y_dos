/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:25:45 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 15:54:06 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lonsrc;

	lonsrc = 0;
	while (src[lonsrc] != '\0')
		lonsrc ++;
	if (size == 0)
		return (lonsrc);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (lonsrc);
}
/*
#include <stdio.h>

int main(void)
{
    char dest[10];
    size_t r = ft_strlcpy(dest, "Hello", sizeof(dest));
    printf("ft_strlcpy: %s (Retorno: %zu)\n", dest, r);
    return (0);
}*/
