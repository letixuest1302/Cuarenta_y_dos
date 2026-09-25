/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:26:54 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/25 11:02:55 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*escibe una cadena de texto (s) y un carácter que quiere buscar (c).
Aunque c se pasa como un número entero (int), representa un carácter ASCII.*/
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i ++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

