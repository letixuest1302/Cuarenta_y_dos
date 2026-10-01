/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:36:47 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 10:17:24 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    t_list *lst = ft_lstnew("Primero");
    t_list *new = ft_lstnew("Final");
    ft_lstadd_back(&lst, new);
    printf("Último elemento: %s\n", (char *)ft_lstlast(lst)->content);
    free(lst->next); free(lst);
    return (0);
}*/
