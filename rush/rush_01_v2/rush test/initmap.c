/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:15:35 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/24 21:51:58 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fillmap(char *p, int map[6][6])
{
	int	l;
	int	d;
	int	len;

	l = 1;
	d = 0;
	len = 4;
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

void	ft_fillzero(int map[6][6])
{
	int	l;
	int	c;
	int	len;

	len = 4;
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
