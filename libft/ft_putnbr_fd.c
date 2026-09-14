#include "libft.h"

void	ft_putnbr_fd(int number, int fd)
{
	if (number < 0)
	{
		number *= -1;
		ft_putchar_fd('-', fd);
	}
	if (number == -2147483648)
	{
		ft_putchar_fd('2', fd);
		number = 147483648;
	}
	if (number < 10)
		ft_putchar_fd(number + '0', fd);
	else
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
}
