/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:52:43 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/01 20:28:55 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void add (int num1, int num2)
{
	put_nbr(num1 + num2);
}

void sub(int num1, int num2)
{
	put_nbr(num1 - num2);
}

void mul(int num1, int num2)
{
	put_nbr(num1 * num2);
}

void div(int num1, int num2)
{
	if (num2 == 0)
		ft_putstr(DIV_MSG);
	else
		put_nbr(num1 / num2);	
}

void mod(int num1, int num2)
{
	if (num2 == 0)
		ft_putstr(MOD_MSG);
	else
		put_nbr(num1 % num2);
}