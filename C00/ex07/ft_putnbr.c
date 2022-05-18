/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:58:33 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/18 12:23:19 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
