/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 20:03:29 by roms              #+#    #+#             */
/*   Updated: 2020/11/19 16:40:55 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src,
		size_t dstsize)
{
	size_t i;
	size_t srclen;
	size_t destlen;

	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (!dstsize)
		return (srclen);
	if (dstsize <= destlen)
		return (srclen + dstsize);
	while (src[i] && (dstsize - 1 - destlen) && dstsize)
	{
		dst[destlen + i] = src[i];
		i++;
		dstsize--;
	}
	dst[destlen + i] = 0;
	return (destlen + srclen);
}
