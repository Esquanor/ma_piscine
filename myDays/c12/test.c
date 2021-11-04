/* ************************************************************************** *//*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:41:50 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/03 17:59:38 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_create_elem(void *data);
void ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_last);
void ft_list_push_back(t_list **begin_list, void *data);
t_list *ft_list_push_strs(int size, char **strs);
void ft_print_list(t_list *list)
{
	if (list)
	{
		printf("%s\n", (char *) list->data);
		ft_print_list(list->next);
	}
}

void	free_fct(void *data)
{
	free(data);
}

int main()
{
	t_list *list;
	list = NULL;
	
	list = ft_create_elem((void *) "1");
	ft_list_push_front(&list, (void *) "2");
	ft_list_push_front(&list, (void *) "3");
	ft_list_push_front(&list, (void *) "4");

	ft_print_list(list);
	printf("size list = %d\n", ft_list_size(list));
	printf("the last element is %s\n", (char *) ft_list_last(list)->data);

	ft_list_push_back(&list, (void *) "5");
	ft_list_push_back(&list, (void *) "6");

	printf("after push back\n");
	ft_print_list(list);
	printf("size list = %d\n", ft_list_size(list));
	printf("the last element is %s\n", (char *) ft_list_last(list)->data);
	
	//t_list *list2 = ft_list_push_strs(ac, av);
	//printf("after list_push_strs\n");
	//ft_print_list(list2);

	ft_list_clear(list, &free_fct);
	//ft_list_clear(list2, &free_fct);

	return (0);
}
