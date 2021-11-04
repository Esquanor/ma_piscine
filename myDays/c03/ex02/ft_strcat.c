/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:39:49 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/19 09:08:45 by lfrederi         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	destlen;
	unsigned int	i;

	i = 0;
	destlen = ft_strlen(dest);
	while (*(src + i) != '\0')
	{
		*(dest + (destlen + i)) = *(src + i);
		i++;
	}
	*(dest + destlen + i) = '\0';
	return (dest);
}
