/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:28:52 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/28 12:15:38 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sum;
	int	i;
	int	sign;

	i = 0;
	sum = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sign * sum);
}

/*
int	main(void)
{
	char *tests[] =
	{
		"123",
		"   -42",
		"---+--+1234ab567",
		" ++--+--987",
		"  \t\n\v\f\r +5678",
		"2147483647",
		"-2147483648",
		"0",
		"  -0",
		NULL;
	}

	int	i;
	
	i = 0;
	while (tests[i] != NULL)
	{
		printf("Test string: \"%s\"\n", tests[i]);
		printf("-> ft_atoi: %d\n", ft_atoi(tests[i]));
		printf("->    atoi: %d\n", atoi(tests[i]));
		printf("------------------------\n");
		i++;
	}

	return (0);
}
*/
