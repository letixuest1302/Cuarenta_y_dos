/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:26:39 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 10:27:41 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
    printf("ft_tolower('R'): %c (Esperado: 'r')\n", ft_tolower('r'));
    return (0);
}*/
