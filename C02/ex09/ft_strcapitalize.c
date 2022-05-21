/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:09:02 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/21 15:46:11 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (0);
	else if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	idx;
	int	space;

	idx = 0;
	space = 1;
	while (str[idx] != '\0')
	{
		if (space == 1 && (str[idx] >= 'a' && str[idx] <= 'z'))
			str[idx] -= 32;
		else if (space == 0 && (str[idx] >= 'A' && str[idx] <= 'Z'))
			str[idx] += 32;
		space = is_space(str[idx]);
		idx++;
	}
	return (str);
}
