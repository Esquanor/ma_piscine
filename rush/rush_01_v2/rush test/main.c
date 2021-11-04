/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:41:28 by dgeorges          #+#    #+#             */
/*   Updated: 2021/10/24 21:54:59 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_fillmap(char *param, int map[6][6]);
void	ft_fillzero(int map[6][6]);
int		ft_add_nbr(int map[6][6], int l, int c, int *r);
void	ft_showmap(int map[6][6]);	
int		ft_check_params(char *param);

int	main(int ac, char *av[])
{
	int	l;
	int	c;
	int	r;
	int	map[6][6];

	l = 1;
	c = 1;
	r = 0;
	if (ac != 2 || ft_check_params(av[1]) == 0)
	{
		write(1, "Error\n", 7);
		return (0);
	}
	ft_fillmap(av[1], map);
	ft_fillzero(map);
	ft_add_nbr(map, l, c, &r);
	if (r > 0)
		ft_showmap(map);
	else
		write(1, "Error\n", 7);
	return (0);
}
