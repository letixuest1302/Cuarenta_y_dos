/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:33:40 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 12:54:24 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	if (fd < 0)
		return ;
	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	write(fd, &"0123456789"[nbr % 10], 1);
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
