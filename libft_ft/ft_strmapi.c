/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:32:23 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:11:02 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

/*
#include <stdio.h>
#include <stdlib.h>

char f_map(unsigned int i, char c)
{
    (void)i;
    return (c - 32); // Convierte a mayúsculas
}

int main(void)
{
    char *res = ft_strmapi("abc", f_map);
    printf("ft_strmapi: %s (Esperado: ABC)\n", res);
    free(res);
    return (0);
}*/