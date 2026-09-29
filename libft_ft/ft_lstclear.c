/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:37:33 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:18:18 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void *))
/*
#include <stdio.h>
#include <stdlib.h>

void del(void *content) { free(content); }

int main(void)
{
    t_list *lst = ft_lstnew(strdup("Nodo 1"));
    lst->next = ft_lstnew(strdup("Nodo 2"));
    ft_lstclear(&lst, del);
    if (lst == NULL)
        printf("ft_lstclear: Lista limpiada y puntero a NULL.\n");
    return (0);
}
*/