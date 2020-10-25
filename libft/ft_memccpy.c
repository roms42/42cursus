/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 22:29:42 by roms              #+#    #+#             */
/*   Updated: 2020/10/25 22:39:59 by roms             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_overlap(void *dest, const void *src, size_t n)
{
	if (src > dest)
	{
		if (n > (size_t)(src - dest))
			return (1);
	}
	if (src < dest)
	{
		if (n > (size_t)(dest - src))
			return (1);
	}
	return (0);
}

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	int overlap;

	i = 0;
	if (!src && !dest)
		return (NULL);
	overlap = ft_overlap(dest, src, n);
	if (overlap)
		return (NULL);
	while (i < n)
	{
		if (*(int*)(src + i) = c)
			return (dest + i);
		*(char*)(dest + i) = *(char*)(src + i);
		i++;
	}
	return (NULL);
}
