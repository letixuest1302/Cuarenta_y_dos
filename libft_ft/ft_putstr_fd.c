/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:33:13 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/28 16:09:59 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*(s++), fd);
}
/*
int main(void)
{
    ft_putstr_fd("Probando probando stdout!\n", 1);
    ft_putstr_fd("¡Atención: esto es un mensaje en stderr!\n", 2);

    return (0);
}*/