/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:44:11 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/21 18:57:52 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int idx;

	len = 0;
	idx = 0;
	while (dest[len] != '\0')
		len++;
	while (src[idx] != '\0')
	{
		dest[len + idx] = src[idx];
		idx++;
	}
	dest[len + idx] = '\0';
	return (dest);
}