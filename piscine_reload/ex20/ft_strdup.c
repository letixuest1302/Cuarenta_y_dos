/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:03:03 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/22 16:41:04 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	const char	*original = "tenemos mucha hambre";
	char	*duplicado;

	printf("Original:  %s\n", original);

	duplicado = ft_strdup(original);

	if (duplicado == NULL)
	{
		printf("Error: No se pudo asignar memoria.\n");
		return (1);
	}

	printf("Duplicado: %s\n", duplicado);
	
	free(duplicado);
	
	return (0);
}
*/
