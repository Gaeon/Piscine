/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:27:03 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/30 18:37:03 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_atoi_base(char *str, char *base, int base_num)
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

int	ft_char_len(int str, int base_num)
{
	int		len;
	int		sign;
	long	num;

	len = 0;
	sign = 1;
	num = (long)str;
	if (num < 0)
	{
		num *= -1;
		sign = -1;
	}
	while (num > 0)
	{
		num /= base_num;
		len++;
	}
	len++;
	return (len * sign);
}

void	ft_put_nbr(char *ret, int str, char *base, int base_num)
{
	int		idx;
	int		len;
	long	num;

	len = ft_char_len(str, base_num);
	num = (long)str;
	if (len < 0)
	{
		idx = (len * -1) - 1;
		num *= -1;
	}
	else
		idx = len - 2;
	ret[idx - 1] = '\0';
	while (idx >= 0)
	{	
		if (idx == 0 && len < 0)
		{
			ret[idx] = '-';
			break ;
		}
		ret[idx] = base[num % base_num];
		num /= base_num;
		idx--;
	}
}

char	*ft_itoa_base(int str, char *base, int base_num)
{
	int		len;
	char	*ret;

	len = ft_char_len(str, base_num);
	if (len < 0)
		ret = (char *)malloc(sizeof(char) * (-len + 1));
	else
		ret = (char *)malloc(sizeof(char) * len);
	if (ret == 0)
		return (0);
	ft_put_nbr(ret, str, base, base_num);
	return (ret);
}
