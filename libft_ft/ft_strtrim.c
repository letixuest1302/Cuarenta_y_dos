/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:31:33 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 11:47:14 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trimmed;
	
	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1^[end - 1), set)
		end --;
	trimmed = (char *)malloc(sizeof(char) *(end - start - 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (star < end)
		trimmed[i] = s1[start];
		i ++;
		start ++;
	trimmed[i] = '\0'
	return (trimmed);
}
/*
int	main(void)
{
	char	*s1;
	char	*set;
	char	*result;

	printf("=== Pruebas de ft_strtrim ===\n\n");

	// Caso 1: Espacios al principio y al final
	s1 = "   Hola Mundo   ";
	set = " ";
	result = ft_strtrim(s1, set);
	printf("Original: [%s]\nSet:      [%s]\nTrimmed:  [%s]\n\n", s1, set, result);
	free(result);

	// Caso 2: Caracteres especiales (* y -)
	s1 = "***¡Hola, Mundo!---***";
	set = "*-";
	result = ft_strtrim(s1, set);
	printf("Original: [%s]\nSet:      [%s]\nTrimmed:  [%s]\n\n", s1, set, result);
	free(result);

	// Caso 3: Sin coincidencias que recortar
	s1 = "Libft 42";
	set = "xyz";
	result = ft_strtrim(s1, set);
	printf("Original: [%s]\nSet:      [%s]\nTrimmed:  [%s]\n\n", s1, set, result);
	free(result);

	// Caso 4: Todo se recorta (cadena vacía resultante)
	s1 = "++++++";
	set = "+";
	result = ft_strtrim(s1, set);
	printf("Original: [%s]\nSet:      [%s]\nTrimmed:  [%s] (Debe estar vacio)\n\n", s1, set, result);
	free(result);

	// Caso 5: Entradas NULL (protección)
	result = ft_strtrim(NULL, "a");
	if (result == NULL)
		printf("Proteccion NULL en s1 pasada con exito (devuelve NULL).\n");
	else
		free(result);

	result = ft_strtrim("abc", NULL);
	if (result == NULL)
		printf("Proteccion NULL en set pasada con exito (devuelve NULL).\n");
	else
		free(result);

	return (0);
} */