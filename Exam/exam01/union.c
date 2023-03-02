/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:40:58 by marvin            #+#    #+#             */
/*   Updated: 2022/05/27 10:40:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_double(char c, char *str, int idx)
{
  int i;
  
  i = 0;
  while (i < idx)
  {
    if (c == str[i])
      return (0);
    i++;
  }
  return (1);
}

int main(int argc, char *argv[])
{
  int i;
  int j;

  i = 0;
  if (argc != 3)
    return (0);
  while (argv[1][i] != '\0')
  {
    if (check_double(argv[1][i], argv[1], i))
      write(1, &argv[1][i], 1);
    i++;
  }
  j = 0;
  while (argv[2][j] != '\0')
  {
    if ((check_double(argv[2][j]), argv[1], i) && check_double(argv[2][j], argv[2], j))
      write(1, &argv[2][j], 1);
    j++;
  }
}