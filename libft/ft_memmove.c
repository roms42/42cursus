/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 20:56:49 by roms              #+#    #+#             */
/*   Updated: 2020/10/25 21:06:39 by roms             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*temp;
	size_t i;

	i = 0;
	temp = malloc(sizeof(src) * n);
	if (!temp)
		return (NULL);
	while (i < n)
		temp[i] = src[i++];
	i = 0;
	while (i < n)
		dest[i] = temp[i++];
	i = 0;
	while (i < n)
		free(temp[i++]);
	return (dest);
}
