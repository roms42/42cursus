/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <rberthau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:55:59 by rberthau          #+#    #+#             */
/*   Updated: 2020/11/16 19:59:48 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_checkbase(char *str)
{
	int i;
	int j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || str[i] < 32 || str[i] > 126)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		nbrnegative(int i)
{
	if (i < 0)
	{
		i *= -1;
		ft_putchar_fd('-', 1);
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int i;
	unsigned int blen;

	i = nbr;
	blen = ft_strlen(base);
	if (ft_checkbase(base) && base != NULL)
	{
		i = nbrnegative(i);
		if (i < blen)
			ft_putchar_fd(base[i], 1);
		else
		{
			ft_putnbr_base(i / blen, base);
			ft_putnbr_base(i % blen, base);
		}
	}
}
