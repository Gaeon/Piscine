/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:31:14 by marvin            #+#    #+#             */
/*   Updated: 2022/05/27 10:31:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
  int i;

  i = 0;
  if (argc != 2)
    return (0);
  while (argv[1][i] != '\0')
  {
    if (argv[1][i] >= 'A' && argv[1][i] < 'A' + 13)
      write(1, &(argv[1][i] + 13), 1);
    else if (argv[1][i] >= 'a' && argv[1][i] < 'a' + 13)
      write(1, &(argv[1][i] + 13), 1);
    else if (argv[1][i] >= 'A'+ 13 && argv[1][i] < 'A' + 26)
      write(1, &(argv[1][i] - 13), 1);
    else if (argv[1][i] >= 'a' + 13 && argv[1][i] < 'a' + 26)
      write(1, &(argv[1][i] - 13), 1);
    i++;
  }
}