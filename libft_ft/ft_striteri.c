/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:32:39 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 13:04:27 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
void f_iter(unsigned int i, char *c)
{
    (void)i;
    *c = *c + 1; // Incrementa en 1 el carácter
}

int main(void)
{
    char s[] = "abc";
    ft_striteri(s, f_iter);
    printf("ft_striteri: %s (Esperado: bcd)\n", s);
    return (0);
}*/