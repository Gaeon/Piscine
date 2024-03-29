/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:18:32 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/23 15:45:57 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	n;

	n = 1;
	while (n < argc)
	{
		while (*argv[n] != '\0')
		{
			write(1, argv[n], 1);
			argv[n]++;
		}
		write(1, "\n", 1);
		n++;
	}
}
