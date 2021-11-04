/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:10:56 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/03 21:15:25 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_countstrs(char *str, char *charset)
{
	int	i;
	int	cntstr;

	i = 0;
	cntstr = 0;
	while (str[i])
	{
		while (ft_is_charset(charset, str[i]) == 1)
			i++;
		cntstr++;
		while ((ft_is_charset(charset, str[i]) == 0) && str[i] != '\0')
			i++;
	}
	return (cntstr);
}

char	*ft_createstring(char *string, int *s, int e)
{
	int		i;
	char	*str;
	int		start;

	i = 0;
	str = (char *) malloc(sizeof(char) * ((e - *s) + 1));
	if (!str)
		return (NULL);
	start = *s;
	while (start < e)
	{
		str[i] = string[start];
		i++;
		start++;
	}
	str[start] = '\0';
	*s = e;
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		s;
	int		e;

	split = (char **) malloc(sizeof(char *) * ft_countstrs(str, charset) + 1);
	if (!split)
		return (NULL);
	i = 0;
	s = 0;
	e = 0;
	while (i < ft_countstrs(str, charset))
	{
		while (ft_is_charset(charset, str[s]) == 1)
			s++;
		e = s;
		while (ft_is_charset(charset, str[e]) == 0 && str[e] != '\0')
			e++;
		if (str[s] == '\0')
			break ;
		split[i] = ft_createstring(str, &s, e);
		i++;
	}
	split[i] = 0;
	return (split);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		char **split = ft_split(av[1], av[2]);
		for (int i = 0; split[i]; i++)
			printf("%s\n", split[i]);
	}
	return (0);
}
