/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:33:49 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/14 17:44:05 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = -1;
	while (++i < (size / 2))
	{
		tmp = *(tab + i);
		*(tab + i) = *(tab + (size - 1 - i));
		*(tab + (size - 1 - i)) = tmp;
	}
}