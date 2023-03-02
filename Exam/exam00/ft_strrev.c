/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:24:35 by marvin            #+#    #+#             */
/*   Updated: 2022/05/20 10:24:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
  int len;
  
  len = 0;
  while(str[len] != '\0')
    len++;
  return (len);
}

char *ft_strrev(char *str)
{
  int   len;
  int   idx;
  char  temp;

  len = ft_strlen(str);
  idx = 0;
  while(idx < len / 2)
  {
    temp = str[idx];
    str[idx] = str[len - idx - 1];
    str[len - idx - 1] = temp;
    idx++;
  }
  return (str);
}

int main()
{
  char str[10] = "abcdefg";
  printf("%s", ft_strrev(str));
}