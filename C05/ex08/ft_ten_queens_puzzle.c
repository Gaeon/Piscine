/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:12:29 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/23 21:15:51 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_cnt = 0;

int	is_valid(char *arr, int col)
{
	int	i;

	i = -1;
	while (++i < col)
	{
		if (arr[i] == arr[col])
			return (0);
		else if (col - i == arr[col] - arr[i])
			return (0);
		else if (col - i == arr[i] - arr[col])
			return (0);
	}
	return (1);
}

void	dfs(char *arr, int col)
{
	int	i;

	if (col == 10)
	{
		write(1, arr, 10);
		write(1, "\n", 1);
		g_cnt++;
	}
	else
	{
		i = -1;
		while (++i < 10)
		{
			arr[col] = i + '0';
			if (is_valid(arr, col))
				dfs(arr, col + 1);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	arr[10];

	dfs(arr, 0);
	return (g_cnt);
}
