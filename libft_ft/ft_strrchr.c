/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:27:09 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/05 15:06:41 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i --;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
    printf("ft_strrchr: %s (Esperado: r)\n", ft_strrchr("rigor", 'r'));
    return (0);
}*/



