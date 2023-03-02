/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:50:36 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/06 21:54:06 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_nbr_len(long nbr)
{
	int	cnt;

	cnt = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		cnt++;
	}
	while (nbr)
	{
		nbr /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_put_nbr(long nbr, char *num_str, int len)
{
	int	sign;

	sign = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		sign *= -1;
	}
	num_str[len] = '\0';
	len--;
	while (len >= 0)
	{
		num_str[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	if (sign < 0)
	num_str[0] = '-';
	return (num_str);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*num_str;

	if (nbr == 0)
	{
		num_str = (char *)malloc(sizeof(char) * 2);
		num_str[0] = '0';
		num_str[1] = '\0';
		return (num_str);
	}
	len = ft_nbr_len((long)nbr);
	num_str = (char *)malloc(sizeof(char) * (len + 1));
	return (ft_put_nbr((long)nbr, num_str, len));
}

int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-0));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-1234));
}