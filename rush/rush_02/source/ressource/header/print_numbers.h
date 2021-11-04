/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 22:55:43 by lfrederi          #+#    #+#             */
/*   Updated: 2021/10/31 12:53:03 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_NUMBERS_H
# define PRINT_NUMBERS_H

char	*ft_is_present(unsigned int nbr, t_dictparse *dict);
void	ft_print_alphanum(char *str);
unsigned int	ft_count_digit(unsigned int nbr);
void	ft_putnbr(unsigned int nbr, int digit, t_dictparse *dict);
void	ft_to_letter(unsigned int n, t_dictparse *dict);

#endif
