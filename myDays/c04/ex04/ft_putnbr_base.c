/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:59:09 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/28 09:51:49 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_is_basevalid(char *b)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	len = 0;
	while (b[len])
		len++;
	if (len < 2)
		return (0);
	while (b[i])
	{
		j = i + 1;
		while (b[j])
		{
			if (b[i] == '-' || b[i] == '+' || b[j] == '-' || b[j] == '+')
				return (0);
			if (b[i] == b[j])
				return (0);
			j++;
		}
		i++;
	}
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(int nbr, char *base, unsigned int baselen)
{
	unsigned int	n;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = nbr * -1;
	}
	else
		n = nbr;
	if (n > (baselen - 1))
		ft_printnbr((n / baselen), base, baselen);
	ft_putchar(base[(n % baselen)]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_is_basevalid(base);
	if (len > 0)
		ft_printnbr(nbr, base, len);
}
