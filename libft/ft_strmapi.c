/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:58:46 by roms              #+#    #+#             */
/*   Updated: 2020/11/19 15:50:19 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		slen;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	dst = malloc(sizeof(*s) * (slen + 1));
	if (!dst)
		return (NULL);
	while (s[i])
	{
		dst[i] = f((unsigned int)(i), s[i]);
		i++;
	}
	dst[i] = 0;
	return (dst);
}
