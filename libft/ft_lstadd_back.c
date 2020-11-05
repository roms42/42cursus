/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <rberthau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:53:02 by rberthau          #+#    #+#             */
/*   Updated: 2020/11/05 17:11:14 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp;

	tmp = *alst;
	new->next = NULL;
	if (alst == NULL)
		return;
	if (*alst == NULL)
		*alst = new;
	else
	{
		while (tmp != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
