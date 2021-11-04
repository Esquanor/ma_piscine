/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:48:32 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/17 21:29:17 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alphanum(char str)
{
	if ((!(str >= '0' && str <= '9'))
		&& (!(str >= 'a' && str <= 'z'))
		&& (!(str >= 'A' && str <= 'Z')))
		return (0);
	return (1);
}

void	ft_updatealphanum(char *word, int size)
{
	int	i;

	if (*word >= 'a' && *word <= 'z')
		*word -= 32;
	i = 0;
	while (++i < size)
	{
		if (*(word + i) >= 'A' && *(word + i) <= 'Z')
			*(word + i) += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*tmp;
	char	*ret;
	int		j;

	j = 0;
	ret = str;
	while (*str != '\0')
	{
		if (ft_str_is_alphanum(*str) == 1)
		{
			j = 1;
			tmp = str;
			str++;
			while (ft_str_is_alphanum(*str) == 1)
			{
				str++;
				j++;
			}
			ft_updatealphanum(tmp, j);
		}
		str++;
	}
	return (ret);
}
