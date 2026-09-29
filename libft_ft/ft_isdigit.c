/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:22:58 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 15:59:48 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include "libft.h"

int main(void)
{
    printf("ft_isdigit('7'): %d (Esperado: != 0)\n", ft_isdigit('7'));
    printf("ft_isdigit('a'): %d (Esperado: 0)\n", ft_isdigit('a'));
    return (0);
}*/
