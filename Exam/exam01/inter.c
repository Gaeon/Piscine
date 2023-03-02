/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:41:01 by marvin            #+#    #+#             */
/*   Updated: 2022/05/27 10:41:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_double(char temp, char *str, int idx)
{
  int i;

  i = 0;
  while (i < idx)
  {
    if (str[i] == temp)
      return (0);
    i++;
  }
  return (1);
}

int main(int argc, char *argv[])
{
  int   i;
  int   j;

  if (argc != 3)
    return (0);
  i = 0;
  while (argv[1][i] != '\0')
  {
    j = 0;
    while (argv[2][j] != '\0')
    {
      if ((argv[2][j] == argv[1][i]) && check_double(argv[1][i], argv[1], i))
      {
        write(1, &argv[1][i], 1);
        break;
      }
      j++;
    }
    i++;
  }
  write(1, "\n", 1);
  return (0);
}