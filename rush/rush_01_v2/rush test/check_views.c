/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:09:44 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/24 21:51:46 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_rowl(int map[6][6], int l)
{
	int	v;
	int	i;
	int	tmp;

	v = 1;
	i = 1;
	tmp = map[l][i];
	i++;
	while (i <= 4)
	{
		if (tmp < map[l][i])
		{
			v++;
			tmp = map[l][i];
		}
		i++;
	}
	return (map[l][0] == v);
}

int	ft_check_rowr(int map[6][6], int l)
{
	int	i;
	int	v;
	int	tmp;

	i = 4;
	v = 1;
	tmp = map[l][i];
	i--;
	while (i > 0)
	{
		if (tmp < map[l][i])
		{
			v++;
			tmp = map[l][i];
		}
		i--;
	}
	return (map[l][5] == v);
}

int	ft_check_columnu(int map[6][6], int c)
{
	int	v;
	int	i;
	int	tmp;

	v = 1;
	i = 1;
	tmp = map[i][c];
	i++;
	while (i <= 4)
	{
		if (tmp < map[i][c])
		{
			v++;
			tmp = map[i][c];
		}
		i++;
	}
	return (map[0][c] == v);
}

int	ft_check_columnd(int map[6][6], int c)
{
	int	i;
	int	v;
	int	tmp;

	i = 4;
	v = 1;
	tmp = map[i][c];
	i--;
	while (i > 0)
	{
		if (tmp < map[i][c])
		{
			v++;
			tmp = map[i][c];
		}
		i--;
	}
	return (map[5][c] == v);
}
