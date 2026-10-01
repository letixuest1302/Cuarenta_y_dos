/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:33:13 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 13:12:41 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
	{
		return ;
	}
	write(fd, s, ft_strlen(s));
}
/*
int main(void)
{
    ft_putstr_fd("Hola descriptor\n", 1);
    return (0);
}*/