/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check_new.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:23:46 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/28 21:08:39 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	print_error(int flag)
{
	if (flag == 1)
		write(2, "Input Error\n", 12);
	else if (flag == 2)
		write (2, "No Possible Answer\n", 19);
	else if (flag == 3)
		write (2, "One Argument Expected\n", 22);
	else if (flag == 4)
		write (2, "Out of Memory\n", 14);
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