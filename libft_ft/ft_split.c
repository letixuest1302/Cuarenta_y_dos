/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:31:47 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/07 14:43:20 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	*ft_free_tab(char **tab, int i)
{
	while (i > 0)
		free(tab[--i]);
	free(tab);
	return (NULL);
}

static char	*ft_get_next_word(char const *s, char c, int *index)
{
	int		start;
	int		len;
	char	*word;

	len = 0;
	while (s[*index] == c && s[*index])
		(*index)++;
	start = *index;
	while (s[*index] && s[*index] != c)
	{
		len++;
		(*index)++;
	}
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, &s[start], len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		i;
	int		index;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	index = 0;
	while (i < words)
	{
		result[i] = ft_get_next_word(s, c, &index);
		if (!result[i])
			return (ft_free_tab(result, i));
		i++;
	}
	result[i] = NULL;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("dale*a*tu*cuerpo*alegria*macarena", '*');
	if (!tab)
		return (1);
	
	i = 0;
	while (tab[i])
	{
		printf("tab[%d]: %s\n", i, tab[i]);
		i++;
	}

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
*/
