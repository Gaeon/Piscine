/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:48:35 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/26 13:48:28 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	idx;
	int	*array;

	if (min >= max)
		return (0);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == 0)
		return (-1);
	idx = -1;
	while (min < max)
	{
		array[++idx] = min;
		min++;
	}
	*range = array;
	return (max - min);
}
