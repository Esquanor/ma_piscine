/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_row_v2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:09:44 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/23 18:51:23 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_row(int **map, int l, int len)
{
	int	v_l;
	int	v_r;
	int	i;
	int tmp;

	v_l = 1;
	i = 1;
	tmp = map[l][i];
	i++;
	while (i <= len)
	{
		if (tmp < map[l][i])
		{
			v_l++;
			tmp = map[l][i];
		}
		i++;
	}
	i = len;
	v_r = 1;
	tmp = map[l][i];
	i--;
	while (i > 0)
	{
		if (tmp < map[l][i])
		{
			v_r++;
			tmp = map[l][i];
		}
		i--;
	}
	return ((map[l][0] == v_l) && (map[l][len + 1] == v_r));
}

int ft_check_column(int **map, int c, int len)
{
	int	v_u;
	int	v_d;
	int	i;
	int tmp;

	v_u = 1;
	i = 1;
	tmp = map[i][c];
	i++;
	while (i <= len)
	{
		if (tmp < map[i][c])
		{
			v_u++;
			tmp = map[i][c];
		}
		i++;
	}
	i = len;
	v_d = 1;
	tmp = map[i][c];
	i--;
	while (i > 0)
	{
		if (tmp < map[i][c])
		{
			v_d++;
			tmp = map[i][c];
		}
		i--;
	}
	return ((map[0][c] == v_u) && (map[len + 1][c] == v_d));
}


