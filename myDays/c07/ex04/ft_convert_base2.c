/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 11:12:28 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/01 20:50:15 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base_is_valid(char *base);
int	ft_atoi_base(char *str, char *base);

void	ft_reverse(char *str, int len)
{
	int		i;
	int		j;
	char	tmp;

	i = len - 1;
	j = 0;
	while (j < (len / 2))
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		i--;
		j++;
	}
}

void	ft_itoa_base(int nbr, char *base, int lenbase, char *convert)
{
	int				i;
	unsigned int	n;
	unsigned int	lb;
	int				neg;

	lb = lenbase;
	neg = 1;
	if (nbr < 0)
	{
		n = nbr * -1;
		neg = -1;
	}
	else
		n = nbr;
	i = 0;
	while (n != 0)
	{
		convert[i] = base[n % lb];
		n /= lb;
		i++;
	}
	if (neg < 0)
		convert[i++] = '-';
	convert[i] = '\0';
	ft_reverse(convert, i);
}

int	ft_sizeallocate(int nbr, int baselen)
{
	int	i;

	i = 0;
	if (nbr < 0)
		i++;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= baselen;
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_from;
	int		baselen_to;
	char	*convert;
	int		size_allocate;

	if (nbr == NULL)
		return (NULL);
	baselen_to = ft_base_is_valid(base_to);
	if ((ft_base_is_valid(base_from) == 0) || (baselen_to == 0))
		return ((void *) 0);
	nbr_from = ft_atoi_base(nbr, base_from);
	size_allocate = ft_sizeallocate(nbr_from, baselen_to);
	convert = (char *) malloc(sizeof(char) * (size_allocate + 1));
	if (!convert)
		return ((void *) 0);
	if (nbr_from != 0)
		ft_itoa_base(nbr_from, base_to, baselen_to, convert);
	else
	{
		convert[0] = base_to[0];
		convert[1] = '\0';
	}
	return (convert);
}
