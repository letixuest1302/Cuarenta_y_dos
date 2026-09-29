/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:23:49 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 15:58:59 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    printf("ft_isprint('A'): %d (Esperado: 1)\n", ft_isprint('A'));
    printf("ft_isprint('\\n'): %d (Esperado: 0)\n", ft_isprint('\n'));
    return (0);
}
*/
