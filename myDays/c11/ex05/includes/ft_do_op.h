/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:38:47 by lfrederi          #+#    #+#             */
/*   Updated: 2021/11/02 16:33:10 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

typedef struct s_opft
{
	char	c;
	void	(*f)(int, int);
}	t_opft;

void	ft_putsum(int a, int b);
void	ft_putsub(int a, int b);
void	ft_putmult(int a, int b);
void	ft_putdiv(int a, int b);
void	ft_putmod(int nbr, int b);

#endif
