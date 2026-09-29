/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:25:59 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:07:19 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	idx;
	
	dest_len = 0;
	while (dest[det_len] != '\0' && dst_len < dstsize)
		dst_len ++;
	src_len = ft_strlen(src);
	
	if (dstsize <= dst_len)
		return(dstsize + src_len);
	
	idx = 0;
	while (src[idx] != '\0' && (dst_len + idx < dstsize - 1))
	{
		dst[dst_len + idx] = src[idx];
		idx ++;
	}
	dst[dst_len + idx] = '\0';
		
	return (dst_len + src_len);
}
/*
#include <stdio.h>

int main(void)
{
    char dest[20] = "Hello";
    size_t r = ft_strlcat(dest, " 42", sizeof(dest));
    printf("ft_strlcat: %s (Retorno: %zu)\n", dest, r);
    return (0);
}*/