/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 14:25:24 by roms              #+#    #+#             */
/*   Updated: 2020/10/15 14:46:05 by roms             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		s = NULL;
	while (*s || *s == c)
		s++;
	if (*s == 0 && c != 0)
		s = NULL;
	return (s);
}
