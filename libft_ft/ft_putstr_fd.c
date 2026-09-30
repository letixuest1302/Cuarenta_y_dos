/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:33:13 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/30 10:52:25 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i ++;
	}
}
/*
int main(void)
{
    ft_putstr_fd("Hola descriptor\n", 1);
    return (0);
}*/