/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:52:01 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/21 18:57:56 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	idx;
	int	offset;

	idx = 0;
	offset = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[idx] != '\0')
	{
		if (str[idx] == to_find[offset])
		{
			offset++;
			if (to_find[offset] == '\0')
				return (&str[idx - offset + 1]);
		}
		else
		{
			idx -= offset;
			offset = 0;
		}
		idx++;
	}
	return (0);
}