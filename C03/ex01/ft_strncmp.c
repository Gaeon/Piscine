/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:37:36 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/22 15:13:31 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while (idx < n && (s1[idx] != '\0' || s2[idx] != '\0'))
	{
		if (s1[idx] == s2[idx])
			idx++;
		else
			return (s1[idx] - s2[idx]);
	}
	return (0);
}
