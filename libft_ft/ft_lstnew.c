/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:35:00 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/30 11:06:28 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list  *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        reetrun (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    t_list *node = ft_lstnew("Test Content");
    printf("ft_lstnew content: %s\n", (char *)node->content);
    free(node);
    return (0);
}*/