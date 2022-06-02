/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:25:39 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/02 13:44:42 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *nbr, char *base_from, int f_base_len);
char	*ft_itoa_base(int nbr, char *base_to, int t_base_len);

int	ft_base_check(char *str)
{
	int	len;
	int	idx;

	len = 0;
	while (str[len] != '\0')
	{
		idx = 0;
		if (str[len] == '-' || str[len] == '+')
			return (-1);
		if ((9 <= str[len] && str[len] <= 13) || str[len] == ' ')
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
	int	f_len;
	int	t_len;

	f_len = ft_base_check(base_from);
	t_len = ft_base_check(base_to);
	if (f_len == -1 || t_len == -1)
		return (0);
	return (ft_itoa_base(ft_atoi_base(nbr, base_from, f_len), base_to, t_len));
}
