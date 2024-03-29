/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:21:06 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/23 15:46:00 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	n;

	n = argc - 1;
	while (n > 0)
	{
		while (*argv[n] != '\0')
		{
			write(1, argv[n], 1);
			argv[n]++;
		}
		write(1, "\n", 1);
		n--;
	}
}
