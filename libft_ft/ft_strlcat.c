/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:25:59 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/07 11:07:34 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	idx;

	dest_len = 0;
	while (dest[dest_len] != '\0' && dest_len < destsize)
		dest_len ++;
	src_len = ft_strlen(src);
	if (destsize <= dest_len)
		return (destsize + src_len);
	idx = 0;
	while (src[idx] != '\0' && (dest_len + idx < destsize - 1))
	{
		dest[dest_len + idx] = src[idx];
		idx ++;
	}
	dest[dest_len + idx] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>

int main(void)
{
    char    dest[10] = "gato";
    size_t  result;

    printf("--- ANTES DE LA FUNCION ---\n");
    printf("dest contiene: \"%s\"\n", dest);
    printf("---------------------------\n\n");

    // Llamamos a ft_strlcat intentando añadir "perro" con un tamaño total de 7
    result = ft_strlcat(dest, "perro", 7);

    printf("--- DESPUES DE LA FUNCION ---\n");
    printf("dest ahora contiene: \"%s\"\n", dest);
    printf("El numero que devuelve (return): %zu\n", result);
    printf("-----------------------------\n");

    return (0);
}
}*/
