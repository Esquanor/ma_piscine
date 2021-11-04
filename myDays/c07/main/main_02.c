/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:12:40 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/27 09:09:33 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int	main()
{
	int i = 0;
	int *t = NULL;
	int	r;
	
	r = ft_ultimate_range(&t, 2147483640, 2147483647);
	printf("size = %d, address = %p\n", r, t);
	if (!t)
		return (0);
	while (i < r)
	{
		printf("%d\n", t[i]);
		i++;
	}	
	return (0);
}
