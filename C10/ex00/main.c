/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:25:23 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/02 17:44:28 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	fd;
	int	length;
	char buf[16];

	if ((fd = open(argv[1], O_RDONLY) == -1))
	{
		write(2, "ERROR", 5);
	}
	while (fd != 0)
	{
		length = read(fd, buf, 16);
		write(1, buf, 16);
		fd += 16;
	}
	close(fd);
}