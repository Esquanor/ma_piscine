/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:12:40 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/25 17:39:00 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strdup(char *str);

int	main(int ac, char *av[])
{
	if (ac == 3)
	{
		char *str = av[1];
		char *str1 = ft_strdup(str);

		printf("%p / %s\n", str, str);
		printf("\n%p / %s\n", str1, str1);

		char *str2 = av[2];
		char *str3 = strdup(str);

		printf("\n%p / %s\n", str2, str2);
		printf("\n%p / %s\n", str3, str3);

	}
		
	return (0);
}
