/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:36:15 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/02 16:34:18 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"
#include "ft_ft.h"
#include <unistd.h>

void	create_structft(t_opft op[5])
{
	char	*sign;
	int		i;
	void	(*t[5])(int, int);

	sign = "+-*/%";
	t[0] = &ft_putsum;
	t[1] = &ft_putsub;
	t[2] = &ft_putmult;
	t[3] = &ft_putdiv;
	t[4] = &ft_putmod;
	i = 0;
	while (i < 5)
	{
		op[i].c = sign[i];
		op[i].f = t[i];
		i++;
	}
}

int	ft_is_a_sign(char *s)
{
	int		i;
	char	*sign;

	sign = "+-*/%";
	if (s[1] == '\0')
	{
		i = 0;
		while (sign[i])
		{
			if (sign[i] == s[0])
				return (1);
			i++;
		}
		return (0);
	}
	else
		return (0);
}

int	main(int ac, char **av)
{
	int		i;
	t_opft	op[5];

	if (ac == 4)
	{
		if (ft_is_a_sign(av[2]) == 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		create_structft(op);
		i = 0;
		while (i < 5)
		{
			if (ft_strcmpc(av[2], op[i].c) == 0)
			{
				op[i].f(ft_atoi(av[1]), ft_atoi(av[3]));
				write(1, "\n", 1);
				break ;
			}
			i++;
		}
	}
	return (0);
}
