/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 09:17:24 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/25 09:47:06 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	fact = 1;
	if (nb == 0)
		return (fact);
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
