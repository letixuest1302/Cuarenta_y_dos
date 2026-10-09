/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:35:49 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/09 12:38:45 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
	return ;
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    t_list *lst = ft_lstnew("Segundo");
    t_list *new = ft_lstnew("Primero");
    ft_lstadd_front(&lst, new);
    printf("Nuevo inicio: %s\n", (char *)lst->content);
    free(lst); free(new);
    return (0);
}*/