/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:47:35 by roms              #+#    #+#             */
/*   Updated: 2020/10/15 15:07:34 by roms             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t littlelen;

	littlelen = ft_strlen(little);
	if (!little)
		return (big);
	while (*big)
	{
		i = 0;
		while (big[i] == little[i] && little[i])
		{
			if (i == littlelen - 1)
				return (big);
			i++;
		}
		if (i)
			big += i;
		else
			big++;
	}
	return (NULL);
}
