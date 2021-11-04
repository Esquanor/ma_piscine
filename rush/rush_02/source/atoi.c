/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaccagn <dpaccagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:33:03 by dpaccagn          #+#    #+#             */
/*   Updated: 2021/10/30 21:55:21 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

unsigned int	ft_isspace(char c)
{
	if (c == ' ' ||(c >= 9 && c <= 13))
		return (1);
	return (0);
}

unsigned int	ft_atoi(char *str)
{
	int	i;
	unsigned int	result;
	unsigned int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isnum(str[i]))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
