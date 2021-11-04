/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_possibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeorges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:41:28 by dgeorges          #+#    #+#             */
/*   Updated: 2021/10/24 21:54:49 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_showmap(int map[6][6]);
int		ft_check_rowl(int map[6][6], int l);
int		ft_check_rowr(int map[6][6], int l);
int		ft_check_columnu(int map[6][6], int c);
int		ft_check_columnd(int map[6][6], int c);
void	ft_fillmap(int map[6][6], char *p);
void	ft_fillzero(int map[6][6]);

int	*ft_test_possibility(int map[6][6], int *tab_possi, int l, int c)
{
	int	i;
	int	j;

	i = 0;
	while (++i < 5)
	{
		j = -1;
		while (++j < 4)
		{
			if (map[l][i] == tab_possi[j])
				tab_possi[j] = 0;
		}
	}
	i = 0;
	while (++i < 5)
	{
		j = -1;
		while (++j < 4)
		{
			if (map[i][c] == tab_possi[j])
				tab_possi[j] = 0;
		}
	}
	return (tab_possi);
}

int	ft_possi_next(int v, int *tab, int *result)
{
	int	i;

	*result = v;
	i = 0;
	while (i < 4)
	{
		if (*result < tab[i])
		{
			*result = tab[i];
			break ;
		}
		i++;
	}
	if (*result <= v)
	{
		*result = 0;
		return (0);
	}
	return (1);
}

void	ft_fill_poss(int tab[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		tab[i] = i + 1;
		i++;
	}
}

void	ft_write_next(int map[6][6], int *l, int *c, int *result)
{
	map[*l][*c] = *result;
	*c = *c + 1;
	if (*c > 4)
	{
		if (ft_check_rowl(map, *l) && ft_check_rowr(map, *l))
		{
			*c = 1;
			*l = *l + 1;
		}
		else
			*c = *c - 1;
	}
	if (*l == 4 && *c != 4 && *c > 1)
		if (!(ft_check_columnu(map, *c - 1) && ft_check_columnd(map, *c - 1)))
			*c = *c - 1;
}

int	ft_add_nbr(int map[6][6], int l, int c, int *r)
{
	int	tab_possi[4];
	int	*tab;
	int	result;

	ft_fill_poss(tab_possi);
	result = 0;
	tab = ft_test_possibility(map, tab_possi, l, c);
	if (ft_possi_next(map[l][c], tab, &result))
	{
		ft_write_next(map, &l, &c, &result);
		if (l >= 5)
			return (*r = *r + 1);
	}
	else
		map[l][c--] = 0;
	if (c == 0)
	{
		l--;
		c = 4;
	}
	if (l != 0)
		ft_add_nbr(map, l, c, r);
	return (*r);
}
