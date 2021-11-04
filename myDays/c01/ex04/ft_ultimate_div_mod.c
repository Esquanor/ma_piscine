/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:55:19 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/14 11:48:37 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		num;
	int		den;

	if (*b == 0)
		return ;
	num = *a;
	den = *b;
	*a = num / den;
	*b = num % den;
}
