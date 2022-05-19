/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:38:09 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/19 17:59:42 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (str != '\0')
	{
		if (str >= 'a' && str <= 'z')
			continue ;
		else if (str >= 'A' && str <= 'Z')
			continue ;
		else
			return (0);
		str++;
	}
	return (1);
}