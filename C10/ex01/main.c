/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:26:20 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/06 21:56:36 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>

void	ft_display(int argc, char *argv[])
{
	int		fd;
	int		idx;
	char	*c;
	
	idx = 1;
	while (idx < argc)
	{
		fd = open(argv[idx], O_RDONLY);
		if (fd == -1)
		{
			
		}
		else
		{
			while (read(fd, &c, 1))
				write(1, &c, 1);
			close(fd);
		}
		idx++;
	}
}

int main(int argc, char *argv[])
{
	if (argc < 2)
		return (0);
	else
		ft_display(argc, argv);
}