/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 12:27:11 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/23 18:45:33 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size != 0)
	{
		while (src[i] != '\0' && size - 1 > i)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

int main()
{
	int i = 0 ;
	int size = 5;
	while(i < size - 1)
	{
		i++;
	}
	printf("%d", i);
}
