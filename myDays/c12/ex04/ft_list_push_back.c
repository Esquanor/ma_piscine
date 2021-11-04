/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:57:39 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/03 15:06:36 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;
	t_list	*list;

	list = *begin_list;
	node = ft_create_elem(data);
	if (!(*(begin_list)))
		*(begin_list) = node;
	else
	{
		while (list->next)
			list = list->next;
		list->next = node;
	}
}
