/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 20:56:49 by roms              #+#    #+#             */
/*   Updated: 2020/10/25 21:27:36 by roms             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	size_t i;

	i = 0;
	temp = malloc(sizeof(*temp) * n);
	if (!temp)
		return (NULL);
	while (i < n)
		temp[i] = *(char*)(src + i++);
	i = 0;
	while (i < n)
		*(char*)(dest + i) = temp[i++];
	i = 0;
	while (i < n)
		free(temp[i++]);
	return (dest);
}
