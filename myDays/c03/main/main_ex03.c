/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:42:31 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/19 09:11:38 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char str0[50] = "Salut comment ca va?";
	printf("%s\n", &str0[0]);
	char *cat0 = strncat(&str0[0], " bien et toi?", 5);
	printf("%s\n", cat0);

	char str1[21] = "Salut comment ca va?";
	printf("%s\n", &str1[0]);
	char *cat1 = strncat(&str1[0], " bien et toi?", 20);
	printf("%s\n", cat1);

	char str4[] = "Salut comment ca va?";
	printf("%s\n", str4);
	char *cat4 = strncat(str4, " bien et toi?", 8);
	printf("%s\n", cat4);

	printf("--------------\n");

	char str2[50] = "Salut comment ca va?";
	printf("%s\n", &str2[0]);
	char *cat2 = ft_strncat(&str2[0], " bien et toi?", 5);
	printf("%s\n", cat2);

	char str3[21] = "Salut comment ca va?";
	printf("%s\n", &str3[0]);
	char *cat3 = ft_strncat(&str3[0], " bien et toi?", 20);
	printf("%s\n", cat3);

	char str5[] = "Salut comment ca va?";
	printf("%s\n", str5);
	char *cat5 = ft_strncat(str5, " bien et toi?", 8);
	printf("%s\n", cat5);

	return (0);
}
