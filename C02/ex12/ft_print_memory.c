/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:08:24 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/23 19:19:52 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rec_hex(unsigned long long nbr)
{
	char	tmp;

	if (nbr != 0)
	{
		ft_rec_hex(nbr / 16);
		if (nbr % 16 < 10)
			tmp = nbr % 16 + '0';
		else
			tmp = (nbr % 16) - 10 + 'a';
		write(1, &tmp, 1);
	}
}

void	to_hex(unsigned char c)
{
	char	arr[2];

	arr[0] = "0123456789abcdef"[c / 16];
	arr[1] = "0123456789abcdef"[c % 16];
	write(1, arr, 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*temp;
	int		idx;
	int		i;

	temp = (char *)addr;
	while (size >= 0)
	{
		ft_rec_hex((unsigned long long)temp);
		write(1, ": ", 2);
		idx = -1;
		while (++idx < 16)
		{
			to_hex(temp[idx]);
			if (idx % 2 == 0)
				write(1, " ", 1);
		}
		idx = -1;
		while (++idx < 16)
		{
			if (temp[idx] >= 32 && temp[idx] <= 126)
				write(1, &temp[idx], 1);
			else
				write(1, ".", 1);
		}
		write(1, "\n", 1);
		temp += 16;
		size -= 16;
	}
	return (addr);
}
