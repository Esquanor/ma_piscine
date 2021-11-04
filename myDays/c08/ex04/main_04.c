/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:25:14 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/27 18:47:36 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int main(int ac, char *av[])
{
	t_stock_str *stock_str;

	stock_str = ft_strs_to_tab(ac, av);
	ft_show_tab(stock_str);
	return (0);
}
