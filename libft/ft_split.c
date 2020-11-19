/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 17:51:02 by roms              #+#    #+#             */
/*   Updated: 2020/11/19 16:40:31 by rberthau         ###   ########.fr       */
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

char	*ft_assignword(const char *s, int wordlen)
{
	int		j;
	char	*dest;

	j = 0;
	dest = malloc(sizeof(char) * (wordlen + 1));
	if (!dest)
		return (NULL);
	while (j < wordlen)
	{
		dest[j] = s[j];
		j++;
	}
	dest[j] = 0;
	return (dest);
}

void	ft_freeall(char **tab, int *i)
{
	int j;

	j = 0;
	while (j < *i - 1)
	{
		free(tab[j]);
		j++;
	}
	free(tab);
}

char	**ft_split(const char *s, char c)
{
	int		words;
	int		wordlen;
	char	**tab;
	int		i;

	if (!s || !c)
		return (NULL);
	i = 0;
	words = ft_countwords(s, c);
	if (!(tab = malloc(sizeof(s) * (words + 1))))
		return (NULL);
	while (*s)
	{
		wordlen = ft_getwordlen(s, c);
		while (*s && *s == c)
			s++;
		tab[i++] = ft_assignword(s, wordlen);
		if (tab[i - 1] == NULL)
			ft_freeall(tab, &i);
		s += wordlen;
	}
	tab[words] = 0;
	return (tab);
}
