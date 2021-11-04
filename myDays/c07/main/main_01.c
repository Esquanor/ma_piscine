/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:12:40 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/26 19:27:53 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int	main()
{
	int i = 0;
	int *t;
	
		t = ft_range(-9, 20);
		if (!t)
		{
			printf("adresse de t = %p", t);
			return (0);
		}
		while (i < 29)
		{
			printf("%d\n", t[i]);
			i++;
		}
	
		
	return (0);
}
