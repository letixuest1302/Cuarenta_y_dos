/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:32:03 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/30 12:10:18 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

    // Paso 1: Función auxiliar para contar cuántos dígitos (y el signo) tiene el número
static int	ft_len(int num)
{
	int	counter;

	if (num == 0)
        return (1);
    counter = 0;
	if (num <= 0)
	{
		counter++; // Cuenta el '-' si es negativo, o el '1' si el número es exactamente 0
		num = -num;
	}
	while (num > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}
static void
	ft_fill_str(char *str, long nbr, int len)
{
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		len--;
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
}
char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*str;

	nbr = n;
	len = ft_count_len(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_fill_str(str, nbr, len);
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