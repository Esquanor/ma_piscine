/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 22:39:00 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/31 18:01:18 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/check.h"
#include "../header/split.h"
#include "../header/struct.h"
#include "../header/print_numbers.h"
#include <unistd.h>

void	ft_puterror(char *msg)
{
	int	i;

	i = 0;
	while (msg[i])
	{
		write(1, &msg[i], 1);
		i++;
	}
}

int	ft_one_arg(char *nbr)
{
	t_dictparse		*dict;
	unsigned int	n;
	char			*str;

	if (ft_nbr_is_valid(nbr) == 0)
		return (-1);
	dict = ft_create_dict_struct("numbers.dict");
	if (!dict)
		return (-1);
	n = ft_atoi(nbr);
	str = ft_is_present(n, dict);
	if ((str && n < 20) || ((n % 10 == 0) && (n < 100)))
	{
		ft_print_alphanum(str);
		return (0);
	}
	ft_print_maxnbr(n, dict);
	return (0);
}

int	ft_two_args(char *file, char *nbr)
{
	t_dictparse		*dict;
	unsigned int	n;
	char			*str;

	if (ft_nbr_is_valid(nbr) == 0)
		return (-1);
	dict = ft_create_dict_struct(file);
	if (!dict)
		return (-1);
	n = ft_atoi(nbr);
	str = ft_is_present(n, dict);
	if ((str && n < 20) || ((n % 10 == 0) && (n < 100)))
	{
		ft_print_alphanum(str);
		return (0);
	}
	ft_print_maxnbr(n, dict);
	return (0);
}

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		if (ft_one_arg(av[1]) == -1)
			ft_puterror("Error\n");
	}
	if (ac == 3)
	{
		if (ft_two_args(av[1], av[2]) == -1)
			ft_puterror("Error\n");
	}
	return (0);
}
