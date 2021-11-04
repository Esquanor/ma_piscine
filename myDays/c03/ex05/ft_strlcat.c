/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:39:23 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/19 19:10:41 by lfrederi         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	i;

	i = 0;
	destlen = ft_strlen(dest);
	if (destlen < size)
	{
		while ((*src + i) != '\0' && (destlen + i) < (size - 1))
		{
			*(dest + destlen + i) = *(src + i);
			i++;
		}
		*(dest + destlen + i) = '\0';
		return (destlen + ft_strlen(src));
	}
	else
		return (ft_strlen(src) + size);
}
