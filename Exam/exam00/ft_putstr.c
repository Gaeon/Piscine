/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:22:29 by marvin            #+#    #+#             */
/*   Updated: 2022/05/20 10:22:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putstr(char *str)
{
  while(*str != '\0')
  {
    write(1, str, 1);
    str++;
  }
}