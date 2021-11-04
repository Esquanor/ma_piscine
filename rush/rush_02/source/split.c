/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 13:24:04 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/30 21:42:59 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../header/split.h"
#include <stdio.h>
int	ft_is_charset(char *charset, char c)
{
	int i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int ft_countstring(char *str, char *charset)
{
	int i = 0;
	int count = 0;
	if ((ft_is_charset(charset, str[i]) == 0) && (ft_is_charset(charset, str[i+1]) == 1))
		count++;
	while (str[i])
	{
		if (((ft_is_charset(charset, str[i]) == 1) || (i == 0))
			&& (ft_is_charset(charset, str[i+1]) == 0)
			&& (str[i] != '\0'))
				count++;
		i++;
	}
	return (count);
}

char	*ft_addstring(char *str, int *s, int e)
{
	int start = *s;
	int i = 0;
	char *string = (char *) malloc(sizeof(char) * (e - *s + 1));
	if (!string)
		return (NULL);
	while (start < e)
	{
		string[i] = str[start];
		start++;
		i++;
	}
	string[i] = '\0';
	*s = e;
	return (string);
}

char **ft_split(char *str, char *charset)
{
	int s = 0;
	int e = 0;
	int size = ft_countstring(str, charset);
	char **split = (char **) malloc(sizeof(char *) * (size + 1));
	if (!split)
		return (NULL);
	int i = 0;
	while (i < size)
	{
		while (ft_is_charset(charset, str[s]) == 1)
			s++;
		e = s;
		while (ft_is_charset(charset, str[e]) == 0 && str[e] != '\0')
			e++;
		if (str[s] == '\0')
			break;
		split[i] = ft_addstring(str, &s, e);
		i++;
	}
	split[i] = 0;
	return (split);
}

