/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <rberthau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:53:02 by rberthau          #+#    #+#             */
/*   Updated: 2020/11/05 17:07:04 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp;

	tmp = *alst;
	if (alst == NULL)
		return;
	if (*alst == NULL)
	{
		*alst = new;
		(*alst)->next = NULL;
	}
	else
	{
		while (tmp != NULL)
			tmp = tmp->next;
		tmp = tmp->next;
		tmp = new;
		tmp->next = NULL;
	}
}
