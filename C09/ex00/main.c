/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:56:05 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/01 11:58:46 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);
int	ft_strlen(char *str);

int main()
{
	char str[100] = "TGIF\n";

	ft_putstr(str);
	printf("\n");
	printf("len : %d", ft_strlen(str));
}