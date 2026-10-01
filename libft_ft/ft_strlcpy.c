/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:25:45 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 13:37:38 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len ++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (src_len);
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
