/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:07:06 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:07:44 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*duplicate;
	size_t	i;

	len = 0;
	while (s1[len] != '\0')
		len++;

	duplicate = (char *)malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);

	// 3. Copiar carácter a carácter
	i = 0;
	while (i < len)
	{
		duplicate[i] = s1[i];
		i++;
	}
	duplicate[i] = '\0'; // Cerrar la cadena

	return (duplicate);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *dup = ft_strdup("Hola 42");
    printf("ft_strdup: %s\n", dup);
    free(dup);
    return (0);
}*/