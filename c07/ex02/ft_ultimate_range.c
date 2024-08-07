/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:11:55 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/07 17:11:58 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_utlimate_range(int **range, int min, int max)
{
  int i = 0;
  int size;

  *range = NULL;
  if (min < 0)
    return (0);
  if (min >= max)
    return (0);
  size = max - min;
  *range = (int *)malloc(sizeof(int) * size);
  if (!range)
    return (-1);
  i = 0;
  while (i < size)
  {
    (*range)[i] = min + i;
    i++;
  }
  return (i);
}
// #include <stdio.h>
// int main(void)
// {
//   int min = 0;
//   int max = 5;
//   int *range;
//   int size = ft_utlimate_range(&range, min, max);
//   printf("size = %d\n", size);
//   while (size--)
//   {
//     printf("%d\n", *range);
//     range++;
//   }
//   return (0);
// }
