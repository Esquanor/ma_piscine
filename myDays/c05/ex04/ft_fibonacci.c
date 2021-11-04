/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:08:39 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/25 12:32:10 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{	
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	if ((index == 1) || (index == 2))
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
