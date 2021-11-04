/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:15:34 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/01 21:16:04 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	b = 1;
	while (a < 8)
	{
		c = b;
		while (++c < 10)
		{
			ft_putchar(a + '0');
			ft_putchar(b + '0');
			ft_putchar(c + '0');
			if (a == 7)
				return ;
			else
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		if (++b > 9)
			b = (++a) + 1;
	}
}
