/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:29:55 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/25 17:38:45 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			cs1;
	char			cs2;

	if (n == 0)
		return (0);
	cs1 = *(s1);
	cs2 = *(s2);
	i = 1;
	while ((cs1 == cs2) && (i < n) && (cs1 != '\0'))
	{
		cs1 = *(s1 + i);
		cs2 = *(s2 + i);
		i++;
	}
	return (cs1 - cs2);
}

int main()
{
	char *src = "a";
	char *dst = "ab";
	printf("%d\n", ft_strncmp(src, dst, 1));
	return (0);
}
