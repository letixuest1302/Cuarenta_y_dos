/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:23:33 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 13:34:28 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    printf("ft_isascii(127): %d (Esperado: 1)\n", ft_isascii(127));
    printf("ft_isascii(200): %d (Esperado: 0)\n", ft_isascii(200));
    return (0);
}
*/