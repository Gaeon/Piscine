/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:12:10 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/05 22:26:07 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	res;

	i = 0;
	while ((i + 1 < length) && (f(tab[i], tab[i + 1]) == 0))
		i++;
	if (i + 1 < length)
	{
		res = f(tab[i], tab[i + 1]);
		i++;
	}
	while (i + 1 < length)
	{
		if ((res < 0) && (f(tab[i], tab[i + 1]) > 0))
			return (0);
		else if ((res > 0) && (f(tab[i], tab[i + 1]) < 0))
			return (0);
		i++;
	}
	return (1);
}
