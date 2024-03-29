/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 17:51:02 by roms              #+#    #+#             */
/*   Updated: 2021/03/21 00:19:47 by roms             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(const char *s, char c)
{
	int	i;
	int	words;

	words = 0;
	while (*s)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (s[i] != c && s[i])
			i++;
		if (i)
			words++;
		s += i;
	}
	return (words);
}

int		ft_getwordlen(const char *s, char c)
{
	int i;

	i = 0;
	while (*s == c && *s)
		s++;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	*ft_assignword(const char *s, int *wordlen, char c)
{
	int		j;
	char	*dest;

	j = 0;
	*wordlen = ft_getwordlen(s, c);
	dest = malloc(sizeof(char) * (*wordlen + 1));
	if (!dest)
		return (NULL);
	while (j < *wordlen)
	{
		dest[j] = s[j];
		j++;
	}
	dest[j] = 0;
	return (dest);
}

void	*ft_freeall(char **tab, int *i)
{
	int j;

	j = 0;
	while (j < *i - 1)
	{
		free(tab[j]);
		j++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		words;
	int		wordlen;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	words = ft_countwords(s, c);
	if (!(tab = malloc(sizeof(s) * (words + 1))))
		return (NULL);
	while (*s && i < words)
	{
		while (*s && *s == c)
			s++;
		tab[i++] = ft_assignword(s, &wordlen, c);
		if (tab[i - 1] == NULL)
			return (ft_freeall(tab, &i));
		s += wordlen;
	}
	tab[words] = 0;
	return (tab);
}
