/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:29:03 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/06 21:55:27 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int sign)
{
	int				temp;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while(i < sign - 1)
	{
		j = 0;
		while (j < sign - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int main()
{
	int tab[10] = {2, 1, 4, 6, 4, 7, 3, 6, 4, 7};
	sort_int_tab(tab, 10);
	for (int i = 0 ; i < 10 ; i++)
	{
		printf("%d ",tab[i]);
	}
}