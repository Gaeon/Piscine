/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:02:10 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/25 19:04:31 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_atoi(char *str)
{
	int	idx;
	int	ret;

	idx = 0;
	ret = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= '0' && str[idx] <= '9')
			ret = ret * 10 + str[idx] - '0';
		else
			return (0);
		idx++;
	}
	return (ret);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
		return (0);
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush (x, y);
	return (0);
}
