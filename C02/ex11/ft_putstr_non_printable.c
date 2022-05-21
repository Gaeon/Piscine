/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:39:17 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/21 16:48:09 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	non_printable(char c)
{
	write(1, "\\", 1);
	write(1, "0123456789abcdef"[c / 16], 1);
	write(1, "0123456789abcdef"[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	len;
	int	cnt;

	len = 0;
	cnt = 0;
	while (str[len] != '\0')
	{
		if (str[len] >= 32 && str[len] <= 126)
			write(1, &str[len], 1);
		else
			non_printable(str[len]);
		len++;
	}
}