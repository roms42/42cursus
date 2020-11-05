/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <rberthau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:53:02 by rberthau          #+#    #+#             */
/*   Updated: 2020/11/05 16:39:12 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (alst == NULL)
		return;
	if (*alst == NULL)
	{
		*alst = new;
		*alst->next = NULL;
	}
	else
	{
		while (*alst != NULL)
		{
			*alst = (*alst)->next;
		}
		*alst = new;
		*alst->next = NULL;
	}
}
