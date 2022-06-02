/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:08:57 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/02 11:49:55 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	ft_atoi(char *str)
{
	int	idx;
	int	sign;
	int	ret;

	idx = 0;
	sign = 1;
	ret = 0;
	while ((9 <= str[idx] && str[idx] <= 13) || str[idx] == 32)
		idx++;
	while (str[idx] == '+' || str[idx] == '-')
	{
		if (str[idx] == '-')
			sign *= -1;
		idx++;
	}
	while ('0' <= str[idx] && str[idx] <= '9')
	{
		ret = ret * 10 + str[idx] - '0';
		idx++;
	}
	return (sign * ret);
}

void	ft_print(int nb)
{
	char	nbr[10];
	int		index;

	index = 0;
	while (nb != 0)
	{
		nbr[index] = nb % 10 + '0';
		nb /= 10;
		index++;
	}
	index--;
	while (index >= 0)
	{
		write(1, &nbr[index], 1);
		index--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		else
		{
			write(1, "-", 1);
			nb *= -1;
		}
	}
	ft_print(nb);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
