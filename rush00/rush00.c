/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:02:13 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/21 11:47:09 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(char begin, char mid, char end, int x)
{
	int	idx;

	ft_putchar(begin);
	idx = 1;
	while (idx < x - 1)
	{
		ft_putchar(mid);
		idx++;
	}
	ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	idx;

	if (x == 0 || y == 0)
		return ;
	ft_print_line('o', '-', 'o', x);
	idx = 1;
	while (idx < y - 1)
	{
		ft_print_line('|', ' ', '|', x);
		idx++;
	}
	ft_print_line('o', '-', 'o', x);
}
