/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:29:43 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/22 11:29:45 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char	a;

	if (n >= 0)
		a = 'P';
	else
		a = 'N';
	ft_putchar(a);
}
/*
int	main(void)
{
	ft_is_negative (-3);
	return(0);
}*/
