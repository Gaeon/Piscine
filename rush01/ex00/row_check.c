/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:48:05 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/28 22:05:35 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	row_check_left(int **matrix, int i)
{
	int	j;
	int	max;
	int	cnt;

	j = 0;
	max = 0;
	cnt = 0;
	while (j < 4)
	{
		if (max < matrix[i][j])
		{
			cnt++;
			max = matrix[i][j];
		}
		j++;
	}
	return (cnt);
}

int	row_check_right(int **matrix, int i)
{
	int	j;
	int	max;
	int	cnt;

	j = 3;
	max = 0;
	cnt = 0;
	while (j > -1)
	{
		if (max < matrix[i][j])
		{
			cnt++;
			max = matrix[i][j];
		}
		j--;
	}
	return (cnt);
}

int	row_check(int **matrix, int *input, int i)
{
	if (input[i + 8] != row_check_left(matrix, i))
		return (0);
	if (input[i + 12] != row_check_right(matrix, i))
		return (0);
	return (1);
}

int	double_check(int **matrix, int i)
{
	int	idx;
	int	j;

	idx = -1;
	while (++idx < i)
	{
		j = -1;
		while (++j < 4)
		{
			if (matrix[i][j] == matrix[idx][j])
				return (0);
		}
	}
	return (1);
}
