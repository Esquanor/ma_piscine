/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:42:31 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/25 12:27:14 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *src = "Hello world, how are you today ?";
	char *find = "today";
	printf("%p", strstr(src, find));
	printf("\n-----------\n");
	printf("%p", ft_strstr(src, find));	

	printf("\n%p", strstr(src, ""));
	printf("\n-----------\n");
	printf("%p", ft_strstr(src, ""));

	printf("\n%p", strstr(src, "qewd4qw68"));
	printf("\n-----------\n");
	printf("%p", ft_strstr(src, "qewd4qw68"));	
	return (0);
}
