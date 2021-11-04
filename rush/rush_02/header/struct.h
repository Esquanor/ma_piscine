/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 13:19:27 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/30 22:51:48 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H
# define BUF_SIZE 4096
typedef struct s_dictparse
{
	unsigned int	value;
	char			*alphanum;
} t_dictparse;

char	*ft_dict_parse(char *file);
int	ft_strslen(char **strs);
t_dictparse	*ft_linebyline(char *buf);
t_dictparse	*ft_create_dict_struct(char *file);

#endif
