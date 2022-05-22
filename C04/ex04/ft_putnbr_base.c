/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:26:50 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/22 18:53:30 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base_check(char *str)
{
	int	len;
	int	idx;

	len = 0;
	while (str[len] != '\0')
	{
		idx = 0;
		if (str[len] == '-' || str[len] == '+')
			return (-1);
		while (idx < len)
		{
			if (str[idx] == str[len])
				return (-1);
			idx++;
		}
		len++;
	}
	if (len <= 1)
		return (-1);
	return (len);
}

void	ft_convert(int nbr, char *base, int base_len)
{
	if (nbr < base_len)
	{
		write(1, &base[nbr], 1);
	}
	else
	{
		ft_convert(nbr / base_len, base, base_len);
		ft_convert(nbr % base_len, base, base_len);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_base_check(base);
	if (base_len == -1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == -2147483648)
		{
			ft_convert(-(nbr / base_len), base, base_len);
			ft_convert(-(nbr % base_len), base, base_len);
		}
		ft_convert(-nbr, base, base_len);
	}
	else
		ft_convert(nbr, base, base_len);
}
