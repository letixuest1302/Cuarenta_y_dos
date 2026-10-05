/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:24:39 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/05 10:25:21 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>

int main(void)
{
    char s[] = "123456";
    ft_bzero(s, 3);
    printf("ft_bzero bytes nulos aplicados en los primeros 3 caracteres\n");
    return (0);
}*/