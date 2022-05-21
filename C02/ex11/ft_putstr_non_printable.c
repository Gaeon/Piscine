/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:39:17 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/21 12:43:41 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_num(char *str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < 10)
			str[i] = '0' + i;
		else
			str[i] = 'a' + i - 10;
		i++;
	}
}

void	non_printable(char c)
{
	char	str[17];

	put_num(str);
	write(1, "\\", 1);
	write(1, &str[c / 16], 1);
	write(1, &str[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	len;
	int	cnt;

	len = 0;
	cnt = 0;
	while (str[len] != 0)
	{
		if (!(str[len] >= 33 && str[len] <= 126) && str[len] != ' ')
			non_printable(str[len]);
		else
			write(1, &str[len], 1);
		len++;
	}
}
