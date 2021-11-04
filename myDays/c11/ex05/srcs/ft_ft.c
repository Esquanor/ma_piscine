/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:27:27 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/02 15:43:45 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmpc(char *str, char c)
{
	if (str == 0)
		return (-1);
	return (str[0] - c);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	res;

	if (!str || (str[0] == '\0'))
		return (0);
	i = 0;
	neg = 1;
	res = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * neg);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	unsigned int	n;

	if (nbr < 0)
	{
		n = nbr * -1;
		write(1, "-", 1);
	}
	else
		n = nbr;
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}
