/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:56:27 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/25 19:03:11 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;
	unsigned int	len_dest;
	unsigned int	len_src;

	idx = 0;
	len_dest = 0;
	len_src = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size > len_dest)
	{
		while (idx < size - len_dest - 1 && src[idx] != '\0')
		{	
			dest[len_dest + idx] = src[idx];
			idx++;
		}
		dest[len_dest + idx] = '\0';
		return (len_dest + len_src);
	}
	else
		return (size + len_src);
}
