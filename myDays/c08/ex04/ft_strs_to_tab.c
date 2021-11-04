/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:37:00 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/03 20:27:42 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_dupstr(char *src)
{
	int		len;
	int		i;
	char	*dup;

	len = 0;
	while (src[len])
		len++;
	dup = (char *) malloc(sizeof(char) * len + 1);
	if (!dup)
		return ((void *) 0);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *stock_str;
	int	i;

	if (ac < 0)
		ac = 0;
	stock_str = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock_str)
		return ((void *) 0);
	i = 0;
	while (i < ac)
	{
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].str = av[i];
		stock_str[i].copy = ft_dupstr(av[i]);
		i++;
	}
	stock_str[i].str = 0;
	return (stock_str);
}
