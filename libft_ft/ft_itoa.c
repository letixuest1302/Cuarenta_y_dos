/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:32:03 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 11:59:56 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int
	ft_nbrlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char
	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*str;

	nbr = n;
	len = ft_nbrlen(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    *str1;
    char	*str2;
	char	*str3;
	char	*str4;
    
    str1 = ft_itoa(-12345);
    printf("ft_itoa: %s\n", str1);

    str2 = ft_itoa(-12345);
	printf("Resultado: %s\n", str2);

    str3 = ft_itoa(-2147483648);
	printf("Resultado: %s\n", str3);

    str4 = ft_itoa(0);
	printf("Resultado: %s\n", str4);
    
    free(str1);
    free(str2);
    free(str3);
    free(str4);
    
    return (0);
}*/