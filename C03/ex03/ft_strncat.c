/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:49:28 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/22 13:52:06 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	len;
	int	idx;

	len = 0;
	idx = 0;
	while (dest[len] != '\0')
		len++;
	while (src[idx] != '\0' && idx < nb)
	{
		dest[len + idx] = src[idx];
		idx++;
	}
	dest[len + idx] = '\0';
	return (dest);
}
