/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:47:35 by roms              #+#    #+#             */
/*   Updated: 2020/10/20 18:52:33 by roms             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t littlelen;

	littlelen = ft_strlen(little);
	if (!big && !little)
		return (0);
	if (*little == 0)
		return ((char*)(big));
	while (*big && len > 0)
	{
		i = 0;
		while (big[i] == little[i] && little[i] && len - i > 0)
		{
			if (i == littlelen - 1)
				return ((char*)(big));
			i++;
		}
		if (i)
		{
			big += i;
			len -= i;
		}
		else
		{
			big++;
			len--;
		}
	}
	return (NULL);
}
