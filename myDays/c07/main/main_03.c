/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:12:40 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/27 15:48:20 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int ac, char *av[])
{
//	printf("%s", ft_strjoin(ac, av, "./a.out"));
	char *dest;

	dest = ft_strjoin(ac - 2, av + 2, av[1]);
	printf("%s", dest);
	return (0);
}
