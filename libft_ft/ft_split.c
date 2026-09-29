/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:31:47 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:11:50 by lesainz          ###   ########.fr       */
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
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char **tab = ft_split("lorem*ipsum*dolor*sit", '*');
    printf("ft_split[1]: %s (Esperado: ipsum)\n", tab[1]);
    
    // Liberación
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
    return (0);
}int main(void)
{
    char **tab = ft_split("lorem*ipsum*dolor*sit", '*');
    printf("ft_split[1]: %s (Esperado: ipsum)\n", tab[1]);
    
    // Liberación
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
    return (0);
}
}
*/