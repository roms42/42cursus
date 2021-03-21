/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:47:35 by roms              #+#    #+#             */
/*   Updated: 2021/03/21 01:22:32 by roms             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_findneedle(const char *big, const char *little, size_t len)
{
	size_t i;

	i = 0;
	while (big[i] == little[i] && little[i] && len - i > 0)
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t littlelen;

	if (!haystack && !needle)
		return (0);
	littlelen = ft_strlen(needle);
	if (*needle == 0)
		return ((char*)(haystack));
	while (*haystack && len > 0)
	{
		i = ft_findneedle(haystack, needle, len);
		if (i == littlelen)
			return ((char*)(haystack));
		haystack++;
		len--;
	}
	return (NULL);
}
