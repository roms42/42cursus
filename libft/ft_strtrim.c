/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 17:36:56 by roms              #+#    #+#             */
/*   Updated: 2020/11/19 18:23:42 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	dstlen;
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	dst = ft_strchr(set, s1[i]);
	while (s1[i] && dst != NULL)
		dst = ft_strchr(set, s1[++i]);
	if (!s1[i])
		return (dst);
	dstlen = ft_strlen(s1 + i);
	dst = ft_strchr(set, s1[i + dstlen - 1]);
	while (dst != NULL)
		dst = ft_strchr(set, s1[i + (--dstlen) - 1]);
	dst = ft_substr(s1, i, dstlen);
	return (dst);
}
