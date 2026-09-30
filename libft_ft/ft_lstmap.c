/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:38:04 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/30 11:26:00 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_list;
    t_list  *new_node;
    void    *content;

    if (!lst || !f || !del)
        return (NULL);
    while (lst)
    {
        content = f(lst->content);
        new_node = ft_lstnew(content);
        if (!new_node)
        {
            del(content);
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return (new_list);
}

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