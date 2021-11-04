/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:13:27 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/03 12:37:32 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list *ft_list_last(t_list *begin_list)
{
	if (begin_list == NULL)
		return (NULL);
	if (begin_list->next == NULL)
		return (begin_list);
	return ft_list_last(begin_list->next);
}
