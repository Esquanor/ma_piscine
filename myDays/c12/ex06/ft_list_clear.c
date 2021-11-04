/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:43:21 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/04 14:53:31 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*next;

	if (begin_list)
	{
		next = begin_list->next;
		free_fct(begin_list->data);
		free(begin_list);
		ft_list_clear(next, free_fct);
	}
}
