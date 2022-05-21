/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:40:29 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/21 12:31:10 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (str != '\0')
	{
		if (str < '0' || str > '9')
			return (0);
		str++;
	}
	return (1);
}
