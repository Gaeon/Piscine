/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:23:52 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/18 13:16:52 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnum(char num[], int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		write (1, &num[i], 1);
		i++;
	}
}

void	print(char num[], int n)
{
	int		i;

	putnum (num, n);
	while (1)
	{
		if (num[0] == 10 - n + '0' && num[n - 1] == '9')
			break ;
		write (1, ", ", 1);
		while (num[i] == '9' - (n - 1 - i))
			i--;
		num[i]++;
		i++;
		while (i < n)
		{
			num[i] = num[i - 1] + 1;
			i++;
		}
		putnum (num, n);
	}
}

void	ft_print_combn(int n)
{
	char	num[10];
	int		i;

	num[0] = '0';
	i = 1;
	while (i < n)
	{
		num[i] = num[i - 1] + 1;
		i++;
	}
	print (num, n);
}
