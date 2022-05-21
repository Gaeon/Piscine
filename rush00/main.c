/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:02:10 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/21 12:06:40 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	idx;

	if (argc != 3)
		return (0);
	idx = 0;
	x = 0;
	y = 0;
	if (argv[1][0] == '-' || argv[2][0] == '-')
		return (0);
	while (idx < 10 && argv[1][idx] != '\0')
		x = x * 10 + argv[1][idx++] - '0';
	idx = 0;
	while (idx < 10 && argv[2][idx] != '\0')
		y = y * 10 + argv[2][idx++] - '0';
	rush (x, y);
	return (0);
}
