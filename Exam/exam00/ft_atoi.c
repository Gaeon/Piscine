/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:28:00 by marvin            #+#    #+#             */
/*   Updated: 2022/05/20 10:28:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *str)
{
  int sign;
  int ret;
  int i;

  i = 0;
  sign = 1;
  ret = 0;
  
  if(str[0] == '+' || str[0] == '-')
  {
    if (str[0] == '-')
      sign = -1;
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9')
  {
    ret = ret * 10 + str[i] - '0';
    i++;
  }
  return (ret * sign);
}

int main()
{
  printf("%d\n", ft_atoi("0"));
  printf("%d\n", ft_atoi("2147483647"));
  printf("%d\n", ft_atoi("-2147483647"));
  printf("%d", ft_atoi("-2147483648"));
}