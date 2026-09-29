/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:31:10 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:09:38 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	count;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len -start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
		
	count = 0;
	while (count < len)
	{
		sub[count] = s[start + count];
		count ++;
	}
	sub[count] = '\0';
	return (sub);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *sub = ft_substr("Tripouille", 2, 4);
    printf("ft_substr: %s (Esperado: ipou)\n", sub);
    free(sub);
    return (0);
}*/