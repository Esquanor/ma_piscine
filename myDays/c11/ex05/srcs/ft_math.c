/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:36:11 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/02 16:17:36 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_ft.h"

void	ft_putsum(int a, int b)
{
	int	res;

	res = a + b;
	ft_putnbr(res);
}

void	ft_putsub(int a, int b)
{
	int	res;

	res = a - b;
	ft_putnbr(res);
}

void	ft_putmult(int a, int b)
{
	int	res;

	res = a * b;
	ft_putnbr(res);
}

void	ft_putdiv(int a, int b)
{
	int	res;

	if (b == 0)
		write(1, "Stop : division by zero", 23);
	else
	{
		res = a / b;
		ft_putnbr(res);
	}
}

void	ft_putmod(int a, int b)
{
	int	res;

	if (b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
	{
		res = a % b;
		ft_putnbr(res);
	}
}
