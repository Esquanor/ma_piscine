/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:20:42 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/31 18:28:47 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/struct.h"
#include "../header/split.h"
#include "../header/check.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char	*ft_dict_parse(char *file)
{
	int		fd;
	int		ret;
	char	*buf;

	buf = (char *) malloc(sizeof(char) * (BUF_SIZE + 1));
	if (!buf)
		return (NULL);
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (close(fd) == -1)
		write(1, "Close file failed\n", 18);
	return (buf);
}

int	ft_strslen(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

void	ft_clean_struct(t_dictparse *dict, int len)
{
	int	i;

	i = 0;
	while (i < len + 1)
	{
		free(&dict[i]);
		i++;
	}
}

t_dictparse	*ft_linebyline(char *buf)
{
	char		**split_dict;
	char		**split_line;
	t_dictparse	*dict;
	int			i;
	int			len;

	split_dict = ft_split(buf, "\n");
	free(buf);
	len = ft_strslen(split_dict);
	dict = (t_dictparse *) malloc(sizeof(t_dictparse) * (len + 1));
	if (!dict)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		split_line = ft_split(split_dict[i], ":");
		if (!split_line)
		{
			ft_clean_struct(dict, len);
			return (NULL);
		}
		dict[i].value = ft_atoi(split_line[0]);
		dict[i].alphanum = split_line[1];
	}
	dict[i].alphanum = 0;
	return (dict);
}

t_dictparse	*ft_create_dict_struct(char *file)
{
	char		*buf;
	t_dictparse	*dict;

	buf = ft_dict_parse(file);
	if (!buf)
		return (NULL);
	dict = ft_linebyline(buf);
	if (!dict)
		return (NULL);
	return (dict);
}

