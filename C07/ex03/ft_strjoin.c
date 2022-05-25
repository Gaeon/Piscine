/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:20:03 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/25 19:04:45 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	sep_len;
	int	total_len;

	i = -1;
	j = -1;
	sep_len = 0;
	total_len = 0;
	while (++i < size)
	{
		while (strs[i][++j] != '\0')
			total_len++;
	}
	while (sep[sep_len] != '\0')
		sep_len++;
	total_len += sep_len * (size - 1);
	return (total_len);
}

char	*ft_cat(int size, char **strs, char *sep, char *ret)
{
	int	i;
	int	j;
	int	idx;

	i = -1;
	idx = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			ret[++idx] = strs[i][j];
		j = -1;
		if (i < size - 1)
		{
			while (sep[++j] != '\0')
				ret[++idx] = sep[j];
		}
	}
	ret[idx + 1] = '\0';
	return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		total_len;

	if (size == 0)
	{
		ret = (char *)malloc(sizeof(char) * 0);
		ret[0] = '\0';
		return (ret);
	}
	total_len = ft_strlen(size, strs, sep);
	ret = (char *)malloc(sizeof(char) * total_len + 1);
	return (ft_cat(size, strs, sep, ret));
}
