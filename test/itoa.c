/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:27:34 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/04 13:11:30 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_length(long nbr)
{
	int len;

	len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_putnbr(char *ret, int nbr, int len)
{
	int sign;

	sign = 1;
	ret[len] = '\0';
	printf("len : %d", len);
	len--;
	if (nbr < 0)
	{
		nbr *= -1;
		sign = -1;
	}
	printf("before len : %d\n", len);
	while (len >= 0)
	{
		ret[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	if (sign == -1)
		ret[0] = '-';
	return (ret);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char 	*ret;

	len = ft_length((long)nbr);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret == 0)
		return (0);
	return (ft_putnbr(ret, nbr, len));
}

int main()
{
	int nbr = 1234;
	printf("%s", ft_itoa(nbr));
}
