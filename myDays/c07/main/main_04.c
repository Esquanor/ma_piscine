/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:12:40 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/26 12:13:21 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int ac, char *av[])
{
	if (ac == 4)
		printf("%s", ft_convert_base(av[1], av[2], av[3]));
	return (0);
}
