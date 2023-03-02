/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaeokim <gaeokim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:32:20 by gaeokim           #+#    #+#             */
/*   Updated: 2022/06/06 20:58:13 by gaeokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void	*data_ref, int (*cmp)())
{
	t_list	*prev;
	t_list	*cur;

	prev = 0;
	cur = *begin_list;
	while (cur != 0)
	{
		if (cmp(cur->data, data_ref) == 0)
		{
			if (prev == 0)
				*begin_list = cur->next;
			else
				prev->next = cur->next;
			free(cur);
		}
		prev = cur;
		cur = cur->next;
	}
}
