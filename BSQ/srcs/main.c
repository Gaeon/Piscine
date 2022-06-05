/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:21:29 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/05 20:24:10 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "bsq.h"

void	init(char **arr, t_map_info *info, int *file)
{
	int	i;

	i = -1;
	while (++i < info->row)
		free (arr[i]);
	free (arr);
	info->col = 0;
	info->row = 0;
	info->empty = '\0';
	info->full = '\0';
	info->obs = '\0';
	if (close (*file) != 0)
		exit(0);
	*file = -1;
}

void	std_input(void)
{
	char		**arr;
	int			file;
	t_map_info	info;

	file = 0;
	if (parse_std_map(file, &arr, &info))
		find_biggest_square(arr, &info);
	else
		ft_putstr(2, MSG_MAP_ERR);
	init(arr, &info, &file);
}

void	file_input(int argc, char **argv)
{
	char		**arr;
	int			file;
	int			i;
	t_map_info	info;

	i = 0;
	while (++i < argc)
	{
		file = open(argv[i], O_RDONLY, 0755);
		if (file != -1)
		{
			if (parse_map(file, &arr, &info))
				find_biggest_square(arr, &info);
			else
				ft_putstr(2, MSG_MAP_ERR);
		}
		else
			ft_putstr(2, MSG_MAP_ERR);
		init(arr, &info, &file);
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		std_input();
	else
		file_input(argc, argv);
	return (0);
}