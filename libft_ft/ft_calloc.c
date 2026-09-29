/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:29:36 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/29 16:07:31 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_memory;
	size_t	total_bytes;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (count > (size_t)(-1) / size)
		return (NULL);
	total_bytes = count * size;
	allocated_memory = malloc(total_bytes);
	if (!allocated_memory)
		return (NULL);
	ft_bzero(allocated_memory, total_bytes);
	return (allocated_memory);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = ft_calloc(5, sizeof(int));
    if (p)
        printf("ft_calloc [0]: %d (Esperado: 0)\n", p[0]);
    free(p);
    return (0);
}*/