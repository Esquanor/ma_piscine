/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:42:31 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/19 21:35:50 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *str, char *tsrc, unsigned int size);

int	main(void)
{
	char str[11] = "Hello";
	printf("Test fonction ft_: return = %u / %s\n", ft_strlcat(str, "world", (unsigned int) 11), str);

	char str1[] = "Hello world";
	printf("Test fonction lib: return = %u / %s\n", ft_strlcat(str1, "world", (unsigned int) 11), str1);

	char str2[0];
	printf("Test fonction lib: return = %u / %s\n", ft_strlcat(str2, "world", (unsigned int) 0), str2);

	char str3[11] = "Hello";
	printf("Test fonction ft_: return = %lu / %s\n", strlcat(str3, "world", (size_t) 3), str3);

	char str4[] = "Hello world";
	printf("Test fonction lib: return = %lu / %s\n", strlcat(str4, "world", (size_t) 11), str4);

	char str5[0];
	printf("Test fonction lib: return = %lu / %s\n", strlcat(str5, "world", (size_t) 0), str5);
	//char str1[] = "Hello world";
	//printf("Test fonction lib: return = %u / %s\n", ft_strlcat(str1, "world", (unsigned int) 11), str1);
	return (0);
}
