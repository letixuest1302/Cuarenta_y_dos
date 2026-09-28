/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesainz <lesainz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:25:30 by lesainz           #+#    #+#             */
/*   Updated: 2026/09/28 11:25:46 by lesainz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	
	d = (unsigned char *)dest;
	s = (const unsigned char*)src;
	
	if (d < s)
	{
		while (len --)
			*d++ = *s++;
	}
	else
	{
		while (len --)
			d[len] = s[len];
	}
	return (dest);
}