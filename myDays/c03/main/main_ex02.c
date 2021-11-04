/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:42:31 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/19 09:06:53 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char str0[50] = "Salut comment ca va?";
	printf("%s\n", &str0[0]);
	char *cat0 = strcat(&str0[0], " bien et toi?");
	printf("%s\n", cat0);

	char str1[25] = "Salut comment ca va?";
	printf("%s\n", &str1[0]);
	char *cat1 = strcat(&str1[0], " bien et toi?");
	printf("%s\n", cat1);

	char str4[] = "Salut comment ca va?";
	printf("%s\n", str4);
	char *cat4 = strcat(str4, " bien et toi?");
	printf("%s\n", cat4);

	printf("--------------\n");

	char str2[50] = "Salut comment ca va?";
	printf("%s\n", &str2[0]);
	char *cat2 = ft_strcat(&str2[0], " bien et toi?");
	printf("%s\n", cat2);

	char str3[25] = "Salut comment ca va?";
	printf("%s\n", &str3[0]);
	char *cat3 = ft_strcat(&str3[0], " bien et toi?");
	printf("%s\n", cat3);

	char str5[] = "Salut comment ca va?";
	printf("%s\n", str5);
	char *cat5 = ft_strcat(str5, " bien et toi?");
	printf("%s\n", cat5);

	return (0);
}
