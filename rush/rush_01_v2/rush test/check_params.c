/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:10:53 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/24 22:38:00 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_number(char c)
{
	if (c >= '1' && c <= '4')
		return (1);
	return (0);
}

int	ft_check_params(char *param)
{
	int	i;

	i = 0;
	while (param[i])
	{
		if ((ft_number(param[i]) == 1 && (i % 2 == 0))
			|| ((param[i] == ' ') && (i % 2 == 1)))
			i++;
		else
			return (0);
	}
	if (i == 31)
		return (1);
	else
		return (0);
}
