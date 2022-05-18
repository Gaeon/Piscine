/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:46:45 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/18 11:49:28 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num1(int num1, int num2, int num3, int num4)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, " ", 1);
	write(1, &num3, 1);
	write(1, &num4, 1);
	if (num1 != '9' || num2 != '8' || num3 != '9' || num4 != '9')
		write (1, ", ", 2);
}

void	ft_comb(char num1, char num2, char num3, char num4)
{
	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			while (num3 <= '9')
			{
				while (num4 <= '9')
				{
					ft_print_num1(num1, num2, num3, num4);
					num4++;
				}
				num3++;
				num4 = '0';
			}
			num2++;
			num3 = num1;
			num4 = num2 + 1;
		}
		num1++;
		num2 = '0';
		num3 = num1;
		num4 = num2 + 1;
	}
}

void	ft_print_comb2(void)
{
	char	num1;
	char	num2;
	char	num3;
	char	num4;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	num4 = '1';
	ft_comb(num1, num2, num3, num4);
}
