/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 10:09:52 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/28 17:49:21 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if ((nb < 0) || (nb == 0) || (nb == 1))
		return (0);
	while (((i * i) < 46341) && (nb != i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	s;

	s = nb;
	if (s < 3)
		return (2);
	if (ft_is_prime(s) == 1)
		return (s);
	s++;
	while (ft_is_prime(s) == 0)
		s++;
	return (s);
}
