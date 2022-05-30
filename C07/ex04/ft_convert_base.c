/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:47:30 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/30 18:36:45 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base, int base_num);
char	*ft_itoa_base(int str, char *base, int base_num);

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_from_len;
	int		base_to_len;
	int		num;

	base_from_len = ft_check_base(base_from);
	base_to_len = ft_check_base(base_to);
	if (base_from_len == -1 || base_to_len == -1)
		return (0);
	num = ft_atoi_base(nbr, base_from, base_from_len);
	return (ft_itoa_base(num, base_to, base_to_len));
}
