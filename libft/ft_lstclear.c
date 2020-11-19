/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <rberthau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:15:53 by rberthau          #+#    #+#             */
/*   Updated: 2020/11/19 16:36:22 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;

	tmp = *lst;
	if (*lst != NULL && lst != NULL)
	{
		while (*lst != NULL)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	}
}
