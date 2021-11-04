/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:15:35 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/23 18:04:15 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_fillmap(int **map, int len, char *p)
{
	int	l;
	int	d;

	l = 1;
	d = 0;
	while (l < (len + 1))
	{
		map[0][l] = (p[(len * 0) + d] - '0');
		map[len + 1][l] = (p[(len * 2) + d] - '0');
		map[l][0] = (p[(len * 4) + d] - '0');
		map[l][len + 1] = (p[(len * 6) + d] - '0');
		l++;
		d += 2;
	}
}

void	ft_fillzero(int **map, int len)
{
	int	l;
	int	c;

	l = 0;
	while (l < (len + 2))
	{
		c = 0;
		while (c < (len + 2))
		{
			if ((l == 0 || l == (len + 1)) && (c == 0 || c == (len + 1)))
				map[l][c] = 0;
			else if ((l > 0 && l < (len + 1)) && (c > 0 && c < (len + 1)))
				map[l][c] = 0;
			c++;
		}
		l++;
	}
}

int	**ft_initmap(char *p, int len)
{
	int	**map;
	int	i;

	i = 0;
	map = (int **) malloc((len + 2) * sizeof(int *));
	if (!map)
		return (0);
	while (i < (len + 2))
	{
		map[i] = (int *) malloc((len + 2) * sizeof(int));
		if (!map[i])
			return (0);
		i++;
	}
	ft_fillzero(map, len);
	ft_fillmap(map, len, p);
	return (map);
}
