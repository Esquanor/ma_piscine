/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_row.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:09:44 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/23 18:27:01 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_row(int t[4], int view_l, int view_r)
{
	int	v_l;
	int	v_r;
	int	i;
	int tmp;

	v_l = 1;
	i = 0;
	tmp = t[i];
	i++;
	while (i < 4)
	{
		printf("i = %d / t[i] = %d / v_l = %d / tmp = %d\n", i, t[i], v_l, tmp);
		if (tmp < t[i])
		{
			v_l++;
			tmp = t[i];
		}
		i++;
	}
	
	printf("\n\n");

	i = 3;
	v_r = 1;
	tmp = t[i];
	i--;
	while (i >= 0)
	{
		printf("i = %d / t[i] = %d / v_r = %d / tmp = %d\n ", i, t[i], v_r, tmp);
		if (tmp < t[i])
		{
			v_r++;
			tmp = t[i];
		}
		i--;
	}
	
	return ((view_l == v_l) && (view_r == v_r));
}


int main()
{
	int t[4] = {1, 4, 3, 2};
	printf("%d\n", ft_check_row(t, 2, 3));

	return (0);
}
