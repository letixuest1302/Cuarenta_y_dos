/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:30:45 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:09:58 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;
	char	*joined;
	
	if(!s1 || !s2)
		return (NULL);
		
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (len1 + len2 +1));
	if (!joined)
		return (NULL);
	i = 0;
	while(s1[i])
	{
		joined[i] = s1[i];
		i ++;
	}
	j = 0;
	while (s2[j])
	{
		joined[i + j] = s2[j];
		j ++;
	}
	joined[i + j] = '\0';
		return (joined);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *res = ft_strjoin("Hola ", "Mundo");
    printf("ft_strjoin: %s\n", res);
    free(res);
    return (0);
}
*/