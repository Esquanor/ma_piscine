/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 22:01:36 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/31 18:29:58 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "../header/struct.h"
#include "../header/print_numbers.h"
#include "../header/split.h"
#include "../header/math.h"

char	*ft_is_present(unsigned int nbr, t_dictparse *dict)
{
	int	i;

	i = 0;
	while (dict[i].alphanum)
	{
		if (dict[i].value == nbr)
			return (dict[i].alphanum);
		i++;
	}
	return (NULL);
}

void	ft_print_alphanum(char *str)
{
	char	**split;
	int		i;
	int		j;
	char	*tmp;

	split = ft_split(str, "- ");
	i = 0;
	while (split[i])
	{
		tmp = split[i]; 
		j = 0;
		while (tmp[j])
		{
			write(1, &tmp[j], 1);
			j++;
		}
		if (split[i + 1] != NULL)
			write(1, " ", 1);
		i++;
	}
}

unsigned int	ft_count_digit(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr < 9)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

void	ft_print_dozen_max(unsigned int mod, t_dictparse *dict, unsigned int nb)
{
	if ((ft_is_present(mod, dict) != NULL))
	{
		write(1, " ",1);
		ft_print_alphanum(ft_is_present(mod, dict));
	}
	else
	{
		if (ft_count_digit(nb) == 3)
			write(1, " ",1);
		ft_print_alphanum(ft_is_present(((mod / 10) * 10) , dict));
		write(1, " ", 1);
		ft_print_alphanum(ft_is_present(mod % 10, dict));
	}
}

void	ft_print_hundred_max(unsigned int nb, t_dictparse *dict)
{
	int				d;
	unsigned int	div;
	unsigned int	mod;

	d = ft_count_digit(nb);
	mod = nb;
	if (d == 1)
		ft_print_alphanum(ft_is_present(nb, dict));
	if (d == 3)
	{
		div = nb / 100;
		mod = nb % 100;
		ft_print_alphanum(ft_is_present(div, dict));
		write(1, " ", 1);
		ft_print_alphanum(ft_is_present(100, dict));
		d--;
	}
	if (d == 2 && mod != 0)
		ft_print_dozen_max(mod, dict, nb);
}

void	ft_print_maxnbr(unsigned int nb, t_dictparse *dict)
{
	int	d;
	int	p;
	int	div;
	int mod;

	d = ft_count_digit(nb);
	if (d < 4)
		ft_print_hundred_max(nb, dict);
	else
	{
		while (1)
		{
		d--;
		while (d % 3 != 0)
			d--;
		p = ft_power(10, d);
		div = nb / p;
		mod = nb % p;
		if (div != 0)
		{
			ft_print_hundred_max(div, dict);
			ft_print_alphanum(ft_is_present(p, dict));
		}
		if (ft_count_digit(mod) < 4 && mod != 0)
		{
			ft_print_hundred_max(mod, dict);
			break;
		}
		if (div == 0)
			break;
		nb = mod;
		}
	}
}
