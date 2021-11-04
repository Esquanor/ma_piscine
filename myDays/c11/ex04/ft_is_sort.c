/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:13:40 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/03 14:30:10 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_cmp(int a, int b)
{
	return (a - b);
}
int	ft_repere(int nb)
{
	if (nb < 0)
		return (-1);
	else if (nb > 0)
		return (1);
	else
		return (0);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	r;
	int	t;

	if (length < 3)
		return (1);
	i = 0;
	r = ft_repere(f(tab[i], tab[length - 1]));
	while (i < length - 1)
	{
		t = ft_repere(f(tab[i], tab[i + 1]));
		if (t != r && t != 0)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	int tab[10] = {-74, -55, 0, 14, 21};
	printf("%d\n", ft_is_sort(tab, 5, &ft_cmp));
	return (0);
}
