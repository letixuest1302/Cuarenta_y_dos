/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:31:33 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 13:26:22 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_character_in_set(char c, const char *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_index;
	size_t	end_index;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start_index = 0;
	while (s1[start_index] && is_character_in_set(s1[start_index], set))
		start_index++;
	end_index = ft_strlen(s1);
	while (end_index > start_index
		&& is_character_in_set(s1[end_index - 1], set))
		end_index--;
	trimmed_str = ft_substr(s1, start_index, end_index - start_index);
	return (trimmed_str);
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