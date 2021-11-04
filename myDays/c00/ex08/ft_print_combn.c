/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:45:06 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/04 16:01:28 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_init_comb(int comb[10], int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < 10 - n)
	{
		comb[i] = 0;
		i++;
	}
	j = 0;
	while (i < 10)
	{
		comb[i] = j;
		j++;
		i++;
	}
}

void	ft_putcomb(int comb[10], int n)
{
	int		i;
	char	t;

	i = 10 - n;
	while (i < 10)
	{
		t = '0' + comb[i];
		write(1, &t, 1);
		i++;
	}
	if (comb[10 - n] != 10 - n)
		write(1, ", ", 2);
}

void	ft_re_init(int comb[10], int i)
{
	int	p;

	p = 10 - i;
	while (p < 10)
	{
		comb[p] = comb[p - 1] + 1;
		p++;
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];
	int	b;
	int	t;

	if ((n < 1) || (n > 9))
		return ;
	ft_init_comb(comb, n);
	while (comb[10 - n] < 11 - n)
	{
		while (comb[9] < 10)
		{
			ft_putcomb(comb, n);
			comb[9] = comb[9] + 1;
		}
		b = 1;
		t = comb[9 - b] += 1;
		while (t > 9 - b)
			t = comb[9 - (++b)] += 1;
		ft_re_init(comb, b);
		if (comb[10 - n] == 10 - n)
		{
			ft_putcomb(comb, n);
			break ;
		}
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_print_combn(atoi(av[1]));
	return (0);
}
