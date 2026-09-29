/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:22:32 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 15:59:35 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    printf("ft_isalpha('g'): %d (Esperado: != 0)\n", ft_isalpha('g'));
    printf("ft_isalpha('5'): %d (Esperado: 0)\n", ft_isalpha('5'));
    return (0);
}
*/