/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:37:41 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/22 11:38:07 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result *= nb;
		nb --;
	}
	return (result);
}
/*
int	main(void)
{
	printf("Factorial de -1 = %d\n", ft_iterative_factorial((-1));
	printf("Factorial de 0 = %d\n", ft_iterative_factorial((-0));
	printf("Factorial de 5 = %d\n", ft_iterative_factorial((5));
	printf("Factorial de 1 = %d\n", ft_iterative_factorial((1));
}*/
