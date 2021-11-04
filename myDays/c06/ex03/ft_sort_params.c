/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:26:32 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/22 09:43:57 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while ((str1[i] == str2[i]) && str1[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_putargs(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		e;
	char	*tmp;

	if (argc > 0)
	{
		e = argc;
		while (e > 2)
		{
			i = 1;
			while (i < (e - 1))
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				{
					tmp = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = tmp;
				}
				i++;
			}
			e--;
		}
		ft_putargs(argc, argv);
	}
	return (0);
}
