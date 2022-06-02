/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:46:47 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/02 11:09:21 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DO_OP_H
# define DO_OP_H

#include <unistd.h>
# define DIV_MSG "Stop : division by zero"
# define MOD_MSG "Stop : modulo by zero"

int	ft_atoi(char *str);
void	ft_print(int nb);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	add(int num1, int num2);
void	sub(int num1, int num2);
void	mul(int num1, int num2);
void	div(int num1, int num2);
void	mod(int num1, int num2);

#endif