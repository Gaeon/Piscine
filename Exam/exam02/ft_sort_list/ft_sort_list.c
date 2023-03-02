/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:29:35 by marvin            #+#    #+#             */
/*   Updated: 2022/06/03 11:29:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *sort_list(t_list *list, int (*cmp)(int, int))
{
    int swap;
    t_list *ptr;

    ptr = list;
    while (list->next != 0)
    {
        if (cmp(list->data, list->next->data) == 0)
        {
            swap = list->data;
            list->data = list->next->data;
            list->next->data = swap;
            list = ptr;
        }
        else
            list = list->next;
    }
    list = ptr;
    return (list);
}