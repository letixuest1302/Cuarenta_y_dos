/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:23:14 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:00:03 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    printf("ft_isalnum('Z'): %d (Esperado: != 0)\n", ft_isalnum('Z'));
    printf("ft_isalnum('#'): %d (Esperado: 0)\n", ft_isalnum('#'));
    return (0);
}*/
