/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:33:40 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:09:09 by lesainz          ###   ########.fr       */
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
		
	c = ft_putnbr_fd(nb % 10) + '0';
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	fd;

	// 1. Pruebas básicas en la salida estándar (fd = 1)
	ft_putstr_fd("--- Pruebas en pantalla (fd = 1) ---\n", 1);
	
	ft_putstr_fd("Positivo:", 1);
	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("Negativo:", 1);
	ft_putnbr_fd(-42, 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("Cero: ", 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);

	// 2. Pruebas con los límites de los enteros (INT_MIN y INT_MAX)
	ft_putstr_fd("INT_MIN:", 1);
	ft_putnbr_fd(INT_MIN, 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("INT_MAX:", 1);
	ft_putnbr_fd(INT_MAX, 1);
	ft_putchar_fd('\n', 1);

	// 3. Prueba escribiendo en un archivo (para verificar el parámetro fd)
	fd = open("test_putnbr.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putnbr_fd(1337, fd);
		ft_putendl_fd("Este numero fue escrito en un archivo.", fd);
		close(fd);
		ft_putstr_fd("\n¡Prueba de archivo 'test_putnbr.txt' completada con exito!\n", 1);
	}
	else
	{
		ft_putstr_fd("Error al abrir el archivo de prueba.\n", 1);
	}

	return (0);
}
*/