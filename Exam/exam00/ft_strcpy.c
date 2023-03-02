/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:37:17 by marvin            #+#    #+#             */
/*   Updated: 2022/05/20 10:37:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *s1, char *s2)
{
  int idx;

  idx = 0;
  while(s2[idx] != '\0')
  {
    s1[idx] = s2[idx];
    idx++;
  }
  s1[idx] = '\0';
  return (s1);
}

int main()
{
  char dest[5] ="hola";
  char src[4] = "hi";
  printf("%s %s", strcpy(dest, src), ft_strcpy(dest, src));
}