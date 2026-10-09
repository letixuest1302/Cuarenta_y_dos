/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:36:10 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/09 12:44:31 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*list;

	count = 0;
	if (!lst)
		return (0);
	++count;
	list = lst;
	while (list -> next)
	{
		++count;
		list = list -> next;
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