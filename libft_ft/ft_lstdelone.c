/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:37:16 by lesainz           #+#    #+#             */
/*   Updated: 2026/10/09 12:38:11 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (lst -> content)
		del(lst -> content);
	free(lst);
	return ;
}
/*
#include <stdio.h>
#include <stdlib.h>

void del(void *content) { free(content); }

int main(void)
{
    t_list *node = ft_lstnew(strdup("Contenido dinámico"));
    ft_lstdelone(node, del);
    printf("ft_lstdelone ejecutado correctamente.\n");
    return (0);
}
*/