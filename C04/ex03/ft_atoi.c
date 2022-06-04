/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:22:11 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/30 18:03:02 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	idx;
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
	while ('0' <= str[idx] && str[idx] <= '9')
	{
		ret = ret * 10 + str[idx] - '0';
		idx++;
	}
	printf("%d %d\n", ret, sign*ret);
	return (sign * ret);
}

int main()
{
	printf("%d %d", atoi("1234"), ft_atoi("1234"));
}