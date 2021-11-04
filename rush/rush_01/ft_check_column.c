/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_row.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:09:44 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/23 17:54:45 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_row(int t[4], int view)
{
	int	v_l;
	int	i;
	int tmp;

	v_l = 1;
	i = 0;
	tmp = t[i];
	i++;
	while (i < 4)
	{
		printf("i = %d / t[i] = %d / v_l = %d\n", i, t[i], v_l);
		if (tmp < t[i])
		{
			v_l++;
			tmp = t[i];
		}
		i++;
	}
	
	return (view == v_l);
}


int main()
{
	int t[4] = {1, 4, 3, 2};
	printf("%d\n", ft_check_row(t, 4));

	return (0);
}
