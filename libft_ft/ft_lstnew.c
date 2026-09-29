/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:35:00 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:13:32 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
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