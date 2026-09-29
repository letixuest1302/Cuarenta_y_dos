/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:31:47 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 15:48:15 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while(s[i])
	{
		while (s[i] && s[i] == c)
			i ++;
		while (s[i])
			counter ++;
		while (s[i] && s[i] != c)
			i ++;
	}
	return (counter)
}

static void free_array(char **tab)
{
	int	k;
	while(!tab)
		return ;
	while(tab[k])
	{
		free(tab[k]);
		k++;
	}
	free(tab);
}

static char **fill_tab(char **tab, const char *s, char c)
{
	int	dx;
	int	tab_dx;
	int	start;
	
	dx = 0;
	tab_dx = 0;
	while (s[dx])
	{
		while (s[dx] && s[dx] == c)
			dx ++;
		if (!s[dx])
			return (NULL);
		start = dx;
		while (s[dx] && s[dx] != c)
			dx ++;
		tab[tab_dx] = ft_substr(s, start, dx - start)
		if (!tab[tab_dx])
		{
			free_array(tab);
			return (NULL);
		}
		tab_dx ++;
	}
	tab[tab_dx] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int	word_count;

	if (!s)
		return (NULL);
	word_count =ft_len_of_word(s, c);
	tab = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	ft_bzero(tab, (word_count + 1) * sizeof(char *));
	return (fil_tab(tab, s, c));
}
/*
int	main(void)
{
	char	**result;
	int		i;

	printf("PRUEBAS DE FT_SPLIT\n\n");

	// 1. Prueba con una frase normal separada por espacios
	printf("--- Prueba 1: 'Hola esto es un test de 42' ---\n");
	result = ft_split("Hola esto es un test de 42", ' ');
	i = 0;
	while (result && result[i])
	{
		printf("result[%d] = [%s]\n", i, result[i]);
		free(result[i]); // Liberamos cada palabra individual
		i++;
	}
	free(result); // Liberamos el array principal de punteros

	// 2. Prueba con delimitadores múltiples seguidos
	printf("\n--- Prueba 2: ':::Hola::mundo::cruel::' (delimitador ':') ---\n");
	result = ft_split(":::Hola::mundo::cruel::", ':');
	i = 0;
	while (result && result[i])
	{
		printf("result[%d] = [%s]\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);

	// 3. Prueba con cadena vacía
	printf("\n--- Prueba 3: Cadena vacia '' ---\n");
	result = ft_split("", ' ');
	if (result && result[0] == NULL)
		printf("¡Exito! La cadena vacia devuelve un array con el puntero NULL.\n");
	free(result);

	return (0);
}
*/