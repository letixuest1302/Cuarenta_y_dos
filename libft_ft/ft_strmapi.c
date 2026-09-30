/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:32:23 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/30 10:50:29 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char        *res;
    
    if (!s || !f)
        return (NULL);
    res = (char *0)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!res)
        return (NULL);
    i = 0;
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i ++;
    }
    res[i] = '\0';
    return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
static char	ft_toupper_wrapper(unsigned int i, char c)
{
	(void)i;
	return ((char)ft_toupper(c));
}
int	main(void)
{
	char	*result;

	result = ft_strmapi("hola 42", ft_toupper_wrapper);
	printf("Resultado: [%s]\n", result);
	free(result);
	return (0);
}*/