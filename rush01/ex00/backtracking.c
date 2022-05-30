/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:56:20 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/29 19:12:20 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	double_check(int **matrix, int i);
int	row_check(int **matrix, int *input, int i);
int	col_check(int **matrix, int *input);
int	print_error(void);

static int	g_flag = 0;
static int	g_cnt = 0;
static int	g_comb[24][4];

void	comb(int *arr, int *visit, int depth)
{
	int	i;

	if (depth == 4)
	{
		i = -1;
		while (++i < 4)
		{
			g_comb[g_cnt][i] = arr[i];
		}
		g_cnt++;
	}
	else
	{
		i = -1;
		while (++i < 4)
		{
			if (visit[i] == 0)
			{
				visit[i] = 1;
				arr[depth] = i + 1;
				comb(arr, visit, depth + 1);
				visit[i] = 0;
			}
		}
	}
}

void	print_matrix(int **matrix)
{
	int		i;
	int		j;
	char	temp;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			temp = matrix[i][j] + '0';
			write(1, &temp, 1);
			if (j != 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

void	backtracking(int **matrix, int *input, int depth)
{
	int	i;

	if (depth == 4 && g_flag == 0)
	{
		if (col_check(matrix, input))
		{
			print_matrix(matrix);
			g_flag = 1;
		}
		return ;
	}
	else
	{
		i = -1;
		while (++i < 24)
		{
			matrix[depth] = g_comb[i];
			if (row_check(matrix, input, depth) && double_check(matrix, depth))
				backtracking(matrix, input, depth + 1);
		}
	}
}

void	base_backtracking(int *input)
{
	int	i;
	int	**matrix;
	int	arr[4];
	int	visit[4];

	i = -1;
	matrix = (int **)malloc(sizeof(int *) * 4);
	if (matrix == 0)
		return ;
	while (++i < 4)
		visit[i] = 0;
	comb(arr, visit, 0);
	backtracking(matrix, input, 0);
	if (g_flag == 0)
		print_error();
	free(matrix);
}
