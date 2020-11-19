/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roms <romain.berthaud812@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 20:30:57 by roms              #+#    #+#             */
/*   Updated: 2020/11/19 14:37:01 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *tab;

	if (!size)
		size = 1;
	if (!count)
		count = 1;
	tab = malloc(sizeof(*tab) * (count * size));
	if (!tab)
		return (NULL);
	ft_bzero(tab, (count * size));
	return (tab);
}
