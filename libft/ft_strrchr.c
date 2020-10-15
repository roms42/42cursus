/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:30:49 by roms              #+#    #+#             */
/*   Updated: 2020/10/15 15:57:39 by roms             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int slen;

	slen = ft_strlen(s);
	s += slen;
	if (!s)
		s = NULL;
	while (*s != c && slen != 0)
	{
		s--;
		slen--;
	}
	if (*s == 0 && c != 0)
		s = NULL;
	return ((char*)(s));
}
