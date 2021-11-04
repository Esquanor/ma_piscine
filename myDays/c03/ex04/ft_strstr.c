/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:57:20 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/19 13:53:29 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;
	char	cs1;
	char	cs2;

	if (n == 0)
		return (0);
	cs1 = *(s1);
	cs2 = *(s2);
	i = 1;
	while ((cs1 == cs2) && (--n > 0) && (cs1 != '\0'))
	{
		cs1 = *(s1 + i);
		cs2 = *(s2 + (i++));
	}
	return (cs1 - cs2);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	to_find_len;

	i = 0;
	to_find_len = ft_strlen(to_find);
	if (to_find_len == 0)
		return (str);
	while (*(str + i) != '\0')
	{
		if (*(str + i) == *(to_find))
			if (ft_strncmp(str + i, to_find, to_find_len) == 0)
				return (str + i);
		i++;
	}
	return ((void *) 0);
}
