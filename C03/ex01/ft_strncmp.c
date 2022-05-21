/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:37:36 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/21 18:43:56 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while (idx < n)
	{
		if (s1[idx] == '\0' || s2[idx] == '\0')
		{
			if (s1[idx] == '\0')
			return ('\0' - (unsigned char)s2[idx]);
			else if (s2[idx] == '\0')
				return ((unsigned char)s1[idx] - '\0');
			else
				return (0);
		}
		if (s1[idx] == s2[idx])
			idx++;
		else
			return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
	}
	return (0);
}