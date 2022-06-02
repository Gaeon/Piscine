/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:16:36 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/02 19:33:12 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

char	ft_valid_op(char c)
{
	if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%')
		return ('0');
	else
		return (c);
}

void	ft_calc(int num1, int num2, char oper)
{
	void	(*f[5])(int, int);
	char	op[6];
	int		i;

	f[0] = add;
	f[1] = sub;
	f[2] = mul;
	f[3] = div;
	f[4] = mod;
	op[0] = '+';
	op[1] = '-';
	op[2] = '*';
	op[3] = '/';
	op[4] = '%';
	i = 0;
	while (op[i] != 0)
	{
		if (op[i] == oper)
		{
			f[i](num1, num2);
			break ;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		num1;
	int		num2;
	char	oper;

	if (argc != 4)
		return (0);
	num1 = ft_atoi(argv[1]);
	oper = ft_valid_op(argv[2][0]);
	num2 = ft_atoi(argv[3]);
	if (oper == '0')
	{
		write(1, "0\n", 2);
		return (0);
	}
	ft_calc(num1, num2, oper);
	write(1, "\n", 1);
	return (0);
}
