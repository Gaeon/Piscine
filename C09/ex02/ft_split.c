/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:01:36 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/31 20:03:07 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_charset(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i] != '\0')
	{
		if (c == charset[i])
			return (1);
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_word_cnt(char *str, char *charset)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (check_charset(str[i], charset) == 0)
			if (check_charset(str[i + 1], charset) == 1)
				cnt++;
		i++;
	}
	return (cnt);
}

void	ft_strcpy(char *array, char *str, int word_len)
{
	int	i;

	i = 0;
	while (i < word_len)
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
}

void	ft_make(char *str, char *charset, char **array)
{
	int	i;
	int	word_len;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != 0)
	{
		word_len = 0;
		while (!check_charset(str[i + word_len], charset))
			word_len++;
		if (word_len > 0)
		{
			array[k] = (char *)malloc(sizeof(char) * (word_len + 1));
			if (array[k] == 0)
				return ;
			ft_strcpy(array[k], &str[i], word_len);
			k++;
		}
		i += word_len + 1;
	}
	array[k] = 0;
}

char	**ft_split(char *str, char *charset)
{
	int		cnt;
	char	**array;

	cnt = ft_word_cnt(str, charset);
	array = (char **)malloc(sizeof(char *) * cnt + 1);
	if (array == 0)
		return (0);
	ft_make(str, charset, array);
	return (array);
}
