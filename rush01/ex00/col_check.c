/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:00:16 by myko              #+#    #+#             */
/*   Updated: 2022/05/28 22:05:38 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_check_reverse(int **matrix, int *input, int x)
{
	int	num;
	int	cnt;
	int	y;

	num = 0;
	cnt = 0;
	y = 4;
	while (--y > -1)
	{
		if (num < matrix[y][x])
		{
			cnt++;
			num = matrix[y][x];
		}
	}
	if (cnt != input[x + 4])
		return (0);
	return (1);
}

int	col_check(int **matrix, int *input)
{
	int	x;
	int	y;
	int	cnt;
	int	num;

	x = -1;
	while (++x < 4)
	{
		y = -1;
		cnt = 0;
		num = 0;
		while (++y < 4)
		{
			if (num < matrix[y][x])
			{
				cnt++;
				num = matrix[y][x];
			}
		}
		if (cnt != input[x])
			return (0);
		if (!col_check_reverse(matrix, input, x))
			return (0);
	}
	return (1);
}
