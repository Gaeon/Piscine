/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:27:56 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/29 19:11:54 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	base_backtracking(int *input);

int	print_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int	ft_input_check(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (!(str[i] >= '1' && str[i] <= '4'))
				return (print_error());
		}
		else
		{
			if (str[i] != ' ')
				return (print_error());
		}
	}
	if (i != 31)
		return (print_error());
	return (1);
}

void	ft_input(char *str, int *input)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (str[++j] != '\0')
	{
		if (str[j] == ' ')
			;
		else
			input[++i] = str[j] - '0';
	}
}

int	main(int argc, char *argv[])
{
	int	*input;

	if (argc != 2)
		return (print_error());
	input = (int *)malloc(sizeof(int) * 16);
	if (input == 0)
		return (0);
	if (ft_input_check(argv[1]))
	{
		ft_input(argv[1], input);
		base_backtracking(input);
	}
	free(input);
	return (0);
}
