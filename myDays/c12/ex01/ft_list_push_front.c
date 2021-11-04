/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:04:10 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/02 21:08:18 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	node = ft_create_elem(data);
	if (node)
	{
		if (*(begin_list) == NULL)
			*begin_list = node;
		else
		{
			node->next = *begin_list;
			*begin_list = node;
		}
	}
}
