/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:35:01 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/19 13:52:41 by lfrederi         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char*src, unsigned int nb)
{
	unsigned int	destlen;
	unsigned int	i;

	if (nb > 0)
	{
		destlen = ft_strlen(dest);
		i = 0;
		while (*(src + i) != '\0' && i < nb)
		{
			*(dest + (destlen + i)) = *(src + i);
			i++;
		}
		*(dest + destlen + i) = '\0';
	}
	return (dest);
}
