/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:48:00 by marvin            #+#    #+#             */
/*   Updated: 2022/06/03 10:48:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(const char *str)
{
    int len;

    while (str[len] != '\0')
        len++;
    return (len);
}

int ft_temp(char c)
{
    if ('0' <= c && c <= '9')
        return (c - '0');
    else if ('A' <= c && c <= 'Z')
        return (c - 'A' + 10);
    else if ('a' <= c && c <= 'z')
        return (c - 'a' + 10);
}

int ft_atoi_base(const char *str, int str_base)
{
    int nbr;
    int len;
    int idx;
    int sign;

    nbr = 0;
    len = ft_strlen(str);
    while (idx < len)
    {
        if (idx == 0 && str[idx] == '-')
          sign = -1;
        else
          nbr = nbr * str_base + ft_temp(str[idx]);
        idx++;
    }
    return (nbr * sign);
}