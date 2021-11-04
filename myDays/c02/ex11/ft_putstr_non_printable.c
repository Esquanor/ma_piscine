/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:57:48 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/18 22:18:09 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	char	c;
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if ((c < ' ') || (c > '~'))
		{
			ft_putchar(92);
			ft_putchar(*(hex + (c / 16)));
			ft_putchar(*(hex + (c % 16)));
		}
		else
			ft_putchar(c);
		i++;
	}
	ft_putchar(92);
	ft_putchar(*(hex + ('\0' / 16)));
	ft_putchar(*(hex + ('\0' % 16)));
}
