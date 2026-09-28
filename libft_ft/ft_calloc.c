/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:29:36 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/28 11:46:16 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void
*ft_calloc(size_t count, size_t size)
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