/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:25:56 by marvin            #+#    #+#             */
/*   Updated: 2022/06/03 10:25:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_len(long nbr)
{
  int len;

  len = 0;
  if (nbr < 0)
  {
    nbr *= -1;
    len++;
  }
  while (nbr > 0)
  {
    nbr /= 10;
    len++;
  }
  return (len);
}

char  *ft_putnbr(long nbr, char *ret, int len)
{
  int sign;

  sign = 1;
  if (nbr < 0)
  {
    nbr *= -1;
    sign = -1;
  }
  ret[len] = '\0';
  len--;
  while (len >= 0)
  {
    ret[len] = nbr % 10 + '0';
    nbr /= 10;
    printf("ret[%d] = %c\n", len, ret[len]);
    len--;
  }
  if (sign == -1)
    ret[0] = '-';
  return (ret);
}

char  *ft_itoa(int nbr)
{
  int len;
  char  *ret;

  if (nbr == 0)
  {
    ret = (char *)malloc(sizeof(char) * 2);
    ret[0] = '0';
    ret[1] = '\0';
    return (ret);
  }
  len = ft_len((long)nbr);
  ret = (char *)malloc(sizeof(char) * (len + 1));
  return (ft_putnbr((long)nbr, ret, len));
}

#include <stdio.h>
int main()
{
  printf("%s", ft_itoa(1532));
}