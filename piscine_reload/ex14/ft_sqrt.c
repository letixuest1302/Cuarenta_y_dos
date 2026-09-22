/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:43:40 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/22 11:59:09 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	number;

	number = 1;
	if (nb > 0)
	{
		while (number * number < nb)
			number++;
		if (number * number == nb)
			return (number);
	}
	return (0);
}
/*
int	main(void)
{
	int	nb;

	printf("raiz cuadrda: ");
	scanf("%d", &nb);
	nb = ft_sqrt(nb);
	printf("resultado: %d", nb);
	return (0);
}*/
