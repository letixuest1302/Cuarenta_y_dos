/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:37:49 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 12:36:09 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

void modify(void *content)
{
    char *str = (char *)content;
    str[0] = 'X';
}

int main(void)
{
    char *s1 = strdup("hola");
    t_list *lst = ft_lstnew(s1);
    ft_lstiter(lst, modify);
    printf("ft_lstiter: %s (Esperado: xola)\n", (char *)lst->content);
    free(s1); free(lst);
    return (0);
}*/