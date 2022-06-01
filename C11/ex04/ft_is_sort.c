/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:12:10 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/01 18:16:02 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	res;

	i = 0;
	res = f(tab[i], tab[i + 1]);
	i = 1;
	while (tab[i + 1] != 0)
	{
		if (f(tab[i], tab[i + 1]) == 0)
			;
		else if (f(tab[i], tab[i + 1]) != res)
			return (0);
	}
	return (1);
}