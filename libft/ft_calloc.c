/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 20:30:57 by roms              #+#    #+#             */
/*   Updated: 2020/10/20 20:55:27 by roms             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t i;
	void **tab;

	i = 0;
	if (!nmemb || !size)
		return (NULL);
	tab = malloc(sizeof(*tab) * nmemb);
	if (!tab)
		return (NULL);
	while (i < nmemb)
	{
		tab[i] = malloc(sizeof(**tab) * size);
		if (!tab[i])
			return (NULL);
		i++;
	}
	return (tab[i - i]);
}
