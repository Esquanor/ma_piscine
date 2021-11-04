/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:11:20 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/01 16:12:43 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int		i;
	int		c;
	char	*str;

	i = 0;
	c = 0;
	while (i < length)
	{
		str = tab[i];
		if (f(str) != 0)
			c++;
		i++;
	}
	return (c);
}
