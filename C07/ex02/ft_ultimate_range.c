/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:48:35 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/30 17:00:33 by gaeokim          ###   ########.fr       */
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
	while (++idx < max - min)
		array[idx] = min + idx;
	*range = array;
	return (max - min);
}
