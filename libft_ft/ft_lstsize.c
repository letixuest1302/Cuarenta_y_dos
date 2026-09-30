/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:36:10 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/30 11:13:31 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
unsigned int	ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst)
    {
        count ++;
        lst = lst->next;
    }
    return (count);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    t_list *lst = ft_lstnew("A");
    lst->next = ft_lstnew("B");
    printf("ft_lstsize: %u (Esperado: 2)\n", ft_lstsize(lst));
    free(lst->next); free(lst);
    return (0);
}*/