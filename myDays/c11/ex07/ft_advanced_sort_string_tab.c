/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:21:58 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/03 17:38:36 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strssize(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	char	*tmp;
	int		i;
	int		size;

	size = ft_strssize(tab);
	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}
