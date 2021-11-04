/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:17:26 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/03 15:58:29 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	*node;
	t_list	*next;
	int		i;

	if (!strs)
		return (NULL);
	list = NULL;
	next = NULL;
	i = 0;
	while (i < size)
	{
		node = ft_create_elem(strs[i]);
		node->next = next;
		next = node;
		i++;
	}
	list = node;
	return (list);
}
