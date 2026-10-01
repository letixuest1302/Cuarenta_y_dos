/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:36:32 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/01 12:38:15 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	node1 = ft_lstnew("Primero");
	node2 = ft_lstnew("Segundo");
	node3 = ft_lstnew("Tercero (último)");

	node1->next = node2;
	node2->next = node3;

	last = ft_lstlast(node1);
	if (last)
		printf("Contenido del último nodo: %s\n", (char *)last->content);

	free(node1);
	free(node2);
	free(node3);

	return (0);
}
