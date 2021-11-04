/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:12:57 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/01 20:25:32 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long int	s;
	int			i;
	int			j;

	if (min >= max)
	{
		(*range) = (void *) 0;
		return (0);
	}
	s = max - min;
	*(range) = (int *) malloc(sizeof(int) * s);
	if (!(*range))
		return (-1);
	i = min;
	j = 0;
	while (i < max)
	{
		(*range)[j] = i;
		i++;
		j++;
	}
	return (s);
}
