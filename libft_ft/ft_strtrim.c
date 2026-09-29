/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:31:33 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:10:19 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trimmed;
	
	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1^[end - 1), set)
		end --;
	trimmed = (char *)malloc(sizeof(char) *(end - start - 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (star < end)
		trimmed[i] = s1[start];
		i ++;
		start ++;
	trimmed[i] = '\0'
	return (trimmed);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *res = ft_strtrim("xxHello42xx", "x");
    printf("ft_strtrim: %s (Esperado: Hello42)\n", res);
    free(res);
    return (0);
}*/