/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:27:56 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/28 22:05:33 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	base_backtracking(int *input);

int	print_error(int flag)
{
	if (flag == 1)
		write(2, "Input Error\n", 12);
	else if (flag == 2)
		write (2, "No Possible Answer\n", 19);
	else if (flag == 3)
		write (2, "One Argument Expected\n", 22);
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
				return (print_error(1));
		}
		else
		{
			if (str[i] != ' ')
				return (print_error(1));
		}
	}
	if (i != 31)
		return (print_error(1));
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
		return (print_error(3));
	input = (int *)malloc(sizeof(int) * 16);
	if (input == 0)
		return (0);
	if (ft_input_check(argv[1]))
		ft_input(argv[1], input);
	base_backtracking(input);
	free(input);
	return (0);
}
