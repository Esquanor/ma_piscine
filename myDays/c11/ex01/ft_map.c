/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:03:36 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/01 12:51:22 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret;
	int	i;

	ret = (int *) malloc(sizeof(int) * length);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < length)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}
