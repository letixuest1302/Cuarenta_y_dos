/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:24:05 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:02:55 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
	size_t	i;
	
	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
    printf("ft_strlen: %zu (Esperado: 10)\n", ft_strlen("42MadridCC"));
    return (0);
}*/