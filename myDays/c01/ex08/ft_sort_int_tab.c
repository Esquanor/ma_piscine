/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:57:29 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/14 17:42:24 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	j = size + 1;
	while (--j > 1)
	{
		while (++i < j - 1)
		{
			if (*(tab + i) > *(tab + (i + 1)))
			{
				tmp = *(tab + i);
				*(tab + i) = *(tab + (i + 1));
				*(tab + (i + 1)) = tmp;
			}
		}
		i = -1;
	}
}
