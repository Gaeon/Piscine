/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:44:10 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/21 12:31:15 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (str != '\0')
	{
		if (str <= 'a' || str >= 'z')
			return (0);
		str++;
	}
	return (1);
}
