/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:36:32 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:15:41 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstlast(t_list *lst)
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    t_list *lst = ft_lstnew("Primero");
    lst->next = ft_lstnew("Último");
    t_list *last = ft_lstlast(lst);
    printf("ft_lstlast: %s\n", (char *)last->content);
    free(lst->next); free(lst);
    return (0);
}*/