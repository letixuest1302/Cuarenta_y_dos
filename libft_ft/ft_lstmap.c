/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:38:04 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:19:23 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

/*
#include <stdio.h>
#include <stdlib.h>

void *f_map_lst(void *content)
{
    return (strdup("Copia modificada"));
}
void del_lst(void *content) { free(content); }

int main(void)
{
    t_list *lst = ft_lstnew(strdup("Original"));
    t_list *new_lst = ft_lstmap(lst, f_map_lst, del_lst);
    printf("ft_lstmap nuevo nodo: %s\n", (char *)new_lst->content);
    
    // Limpieza
    ft_lstclear(&lst, del_lst);
    ft_lstclear(&new_lst, del_lst);
    return (0);
}*/