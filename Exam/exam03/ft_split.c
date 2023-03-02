/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:58:59 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/06 21:50:07 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**ret;
	
	i = 0;
	j = 0;
	ret = malloc(10000);
	while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
			i++;
	while (str[i])
	{
		if (str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
		{
			k = 0;
			ret[j] = malloc(10000);
			while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
			{
				ret[j][k] = str[i];
				k++;
				i++;
			}
			ret[j][k] = 0;
			j++;
		}
		else
			i++;
	}
	ret[j] = 0;
	return (ret);
}

#include <stdio.h>
int main()
{
	char **str_arr;
	int i;
	str_arr = ft_split("Hello World Cat\tDog\nPizza School");
	for(i=0;str_arr[i] != 0; i++)
		printf("%s\n",str_arr[i]);
	for(i=0;str_arr[i] != 0; i++)
		free(str_arr[i]);
	free(str_arr);  
}