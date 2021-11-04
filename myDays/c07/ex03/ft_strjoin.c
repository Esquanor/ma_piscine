/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:16:28 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/02 11:26:35 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strslen(char **strs, int size)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (i < size)
	{
		str = strs[i];
		j = 0;
		while (str[j])
			j++;
		len += j;
		i++;
	}
	return (len);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*join;
	int		i;

	len = 0;
	if (size < 1)
	{
		join = (char *) malloc(sizeof(*join) * 1);
		join[0] = '\0';
		return (join);
	}
	len = ft_strslen(strs, size) + (ft_strlen(sep) * (size - 1));
	join = (char *) malloc(sizeof(*join) * (len + 1));
	if (!join)
		return ((void *) 0);
	i = 0;
	join[0] = '\0';
	while (i < size)
	{
		ft_strcat(join, strs[i]);
		if (i < size - 1)
			ft_strcat(join, sep);
		i++;
	}
	return (join);
}
