/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:39:17 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/22 19:23:59 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	non_printable(unsigned char c)
{
	char	arr[2];

	arr[0] = "0123456789abcdef"[c / 16];
	arr[1] = "0123456789abcdef"[c % 16];
	write(1, "\\", 1);
	write(1, arr, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int				idx;
	unsigned char	c;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 32 && str[idx] <= 126)
			write(1, &str[idx], 1);
		else
		{
			c = str[idx];
			non_printable(c);
		}
		idx++;
	}
}
