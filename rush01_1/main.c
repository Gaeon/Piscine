/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:27:56 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/28 21:07:50 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		print_error(int flag);
int		ft_input_check(char *str);
void	ft_input(char *str, int *input);
void	ft_backtracking(int *input);

int	main(int argc, char *argv[])
{
	int	*input;

	input = (int *)malloc(sizeof(int) * 16);
	if (argc != 2)
		return (print_error(3));
	if (input == 0)
		return (print_error(4));
	if (ft_input_check(argv[1]))
		ft_input(argv[1], input);
	base_backtracking(input);
	free(input);
	return (0);
}
