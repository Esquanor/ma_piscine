/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:42:56 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/01 20:24:37 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*t;
	int			i;
	int			j;
	long int	s;

	if (min >= max)
		return ((void *) 0);
	s = max - min;
	t = (int *) malloc(sizeof(int) * s);
	if (!t)
		return ((void *) 0);
	i = min;
	j = 0;
	while (i < max)
	{
		t[j] = i;
		i++;
		j++;
	}
	return (t);
}
