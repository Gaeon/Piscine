/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:08:10 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/23 21:15:39 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime1(int nb)
{
	int	flag;
	int	num;

	flag = 0;
	num = 2;
	if (nb < 2)
		return (0);
	while (num * num <= nb && num < 46341)
	{
		if (nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime1(nb) != 1)
		nb++;
	return (nb);
}
