/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 17:36:56 by roms              #+#    #+#             */
/*   Updated: 2020/10/24 16:51:13 by roms             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *s1)
{
	int i;
	int size;
	int sizebis;
	char *dst;

	i = 0;
	size = ft_strlen(s1);
	sizebis = size;
	dst = malloc(sizeof(char) * (size + 1));
	if (!dst)
		return (NULL);
	while (i < sizebis)
	{
		dst[i] = s1[size];
		i++;
		size--;
	}
	dst[i] = 0;
	return (dst);
}

int	ft_isset(int c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_getlength(char const *s1, char const *set)
{
	char *temp;
	size_t dstlen;
	size_t i;

	i = 0;
	temp = ft_strrev(s1);
	while (ft_isset(s1[i], set))
		i++;
	dstlen = -i;
	i = 0;
	while (ft_isset(temp[i], set))
		i++;
	dstlen -= i;
	dstlen += ft_strlen(s1);
	return (dstlen);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *dst;
	size_t dstlen;
	size_t i;

	dstlen = ft_getlength(s1, set);
	dst = malloc(sizeof(char) * (dstlen + 1));
	if (!dst)
		return (NULL);
	while (ft_isset(*s1, set))
		s1++;
	i = 0;
	while (i < dstlen)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
