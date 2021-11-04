/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 12:29:16 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/31 12:51:56 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/math.h"

unsigned int	ft_power(unsigned int n, int power)
{
	if (power < 0)
		return (0);
	if ((n == 0) || (n == 1))
		return (n);
	if (power == 0)
		return (1);
	return n * ft_power(n, power - 1);
}

