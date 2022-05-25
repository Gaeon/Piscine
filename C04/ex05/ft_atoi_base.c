/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:09:25 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/25 22:08:34 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_base(char *str)
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

int	return_num(char c, char *base, int base_num)
{
	int	idx;

	idx = 0;
	while (idx < base_num)
	{
		if (c == base[idx])
			return (idx);
		idx++;
	}
	return (-1);
}

int	ft_atoi_1(char *str, char *base, int base_num)
{
	int	idx;
	int	temp;
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
	while (str[idx] != '\0')
	{
		temp = return_num(str[idx], base, base_num);
		if (temp == -1)
			break ;
		ret = ret * base_num + temp;
		idx++;
	}
	return (sign * ret);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_num;

	base_num = ft_check_base(base);
	if (base_num == -1)
		return (0);
	return (ft_atoi_1(str, base, base_num));
}

int main()
{printf("======ex05======\n");
		char base[20] = "0123456789";
		char base1[20] = "01";
		char base2[20] = "0123456789ABCDEF";
		char base3[20] = "poneyvif";
		char base4[20] = "poneyviff";
		printf("%d\n", ft_atoi_base("4523816", base));
		printf("%d\n", ft_atoi_base("10001010000011100101000", base1));
		printf("%d\n", ft_atoi_base("450728", base2));
		printf("%d\n", ft_atoi_base("nonpeyvp", base3));
		printf("%d\n", ft_atoi_base("nonpeyvp", base4));
		printf("%d\n", ft_atoi_base("-2147483648", base));
		printf("%d\n", ft_atoi_base("-10000000000000000000000000000000", base1));
		printf("%d\n", ft_atoi_base("-80000000", base2));
		printf("%d\n", ft_atoi_base("-npppppppppp", base3));
	}
