/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:47:44 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/22 11:47:49 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}
/*
int	main(void)
{
	char	cadena[] = "ABA";
	char	compara[] = "ABZ";
	int	rpta;

	rpta = ft_strncmp(&cadena[0], &compara[0], 3);
	printf("%d\n", rpta);
	return (0);
}*/
