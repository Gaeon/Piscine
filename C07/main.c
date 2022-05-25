/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:01:39 by gaeokim           #+#    #+#             */
/*   Updated: 2022/05/25 19:03:10 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"
#include "ex04/ft_convert_base.c"
#include "ex04/ft_convert_base2.c"
#include "ex05/ft_split.c"

#include <stdio.h>
#include <string.h> 

int main()
{
	{
		printf("======ex00======\n");
		
	}
	{
		printf("======ex01======\n");
		
	}
	{
		printf("======ex02======\n");
		
	}
	{
		printf("======ex03======\n");
		char *strs[] = {"hello","4242", "world","gaeon", "nojam"};
		char sep[10] = " : ";
		int	size = 5;
		printf("%s", ft_strjoin(size, strs, sep));
	}
	{
		printf("======ex04======\n");
		
	}
	{
		printf("======ex05======\n");
		
	}
}

