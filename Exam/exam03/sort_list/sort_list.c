/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:32:46 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/06 21:39:54 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*sort_list(t_list	*lst, int (*cmp)(int, int))
{
	t_list	*cur;
	int		temp;

	cur = lst;
	while (lst->next)
	{
		if (cmp(lst->data, lst->next->data) != 0)
		{
			temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;
			lst = cmp;
		}
		lst = lst->next;
	}
	lst = cmp;
	return (lst);
}
