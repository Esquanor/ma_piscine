/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:42:31 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/19 13:42:32 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%d\n", ft_strcmp("AB", "AB"));
	printf("%d\n", strcmp("AB", "AB"));

	printf("%d\n", ft_strcmp("ABSGD", "ABkdl"));
	printf("%d\n", strcmp("ABSGD", "ABkdl"));

	printf("%d\n", ft_strcmp("AB154", "AB120"));
	printf("%d\n", strcmp("AB154", "AB120"));

	printf("%d\n", ft_strcmp("ABml", ""));
	printf("%d\n", strcmp("ABml", ""));

	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", strcmp("", ""));

	printf("%d\n", ft_strcmp("oijdehhf864984564=*/-+!@$^#@!", "oijdehhf864984564=*/-+!@$^#@!"));
	printf("%d\n", strcmp("oijdehhf864984564=*/-+!@$^#@!", "oijdehhf864984564=*/-+!@$^#@!"));

	return (0);
}
