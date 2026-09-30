/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:33:40 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/30 10:55:17 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
		
	c = (nb % 10) + '0';
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putstr_fd("Prueba de putstr_fd\n", 1);
	ft_putendl_fd("Prueba de putendl_fd (con salto extra)", 1);
	
	ft_putstr_fd("Numero positivo: ", 1);
	ft_putnbr_fd(4242, 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("Numero negativo: ", 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);

	return (0);
}
*/