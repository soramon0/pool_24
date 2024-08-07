/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 21:26:42 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/06 21:26:44 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
  int *r;
  int i;
  int size;

  if (min < 0)
    return (0);
  if (min >= max)
    return (0);
  size = max - min;
  r = malloc(sizeof(int) * size);
  if (!r)
    return (0);
  i = 0;
  while (i < size)
  {
    r[i] = min + i;
    i++;
  }
  return (r);
}
// #include <stdio.h>
// int main(void)
// {
//   int min = 1;
//   int max = 3;
//   int *data = ft_range(min, max);
//   int i = 0;
//   while(i < max - min)
//   {
//     printf("%d\n", data[i]);
//     i++;
//   }
//   return (0);
// }
