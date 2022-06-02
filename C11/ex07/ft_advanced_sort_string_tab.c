/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:28:48 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/02 11:52:40 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap1(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}	

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;

	i = 0;
	while (tab[i + 1] != 0)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
			ft_swap1(&tab[i], &tab[i + 1]);
		i++;
	}
}
