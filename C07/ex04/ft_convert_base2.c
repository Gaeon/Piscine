/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:27:03 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/25 21:53:38 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_itoa_base(int nbr, char *base, int base_num)
{
	
}
