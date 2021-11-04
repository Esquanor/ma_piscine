/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:42:31 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/19 09:02:21 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%d\n", ft_strncmp("hello world", "HELLO WORLD", 5));
	printf("%d\n", strncmp("hello world", "HELLO WORLD", 5));

	printf("%d\n", ft_strncmp("ABSGD", "ABkdl", 2));
	printf("%d\n", strncmp("ABSGD", "ABkdl", 2));

	printf("%d\n", ft_strncmp("AB154", "AB120", 4));
	printf("%d\n", strncmp("AB154", "AB120", 4));

	printf("%d\n", ft_strncmp("ABml", "", 6));
	printf("%d\n", strncmp("ABml", "", 6));

	printf("%d\n", ft_strncmp("", "", 154));
	printf("%d\n", strncmp("", "", 154));

	printf("%d\n", ft_strncmp("ikwhafiwf_)(*&^%$68486)", "ikwhafiwf_)(*&^%$68486)", 14));
	printf("%d\n", strncmp("ikwhafiwf_)(*&^%$68486)", "ikwhafiwf_)(*&^%$68486)", 14));
	return (0);
}
