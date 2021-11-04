/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:07:11 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/25 19:26:14 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int				i;
	unsigned int	sqrt;

	i = 1;
	sqrt = 0;
	if (nb < 1)
		return (sqrt);
	while (sqrt < (unsigned int) nb)
	{
		sqrt = i * i;
		i++;
	}
	if (sqrt == (unsigned int) nb)
		return (i - 1);
	else
		return (0);
}
