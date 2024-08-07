/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:51:35 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/07 18:51:36 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char  *ft_strjoin(int size, char **strs, char *sep)
{
  int count;
  int i;
  int j;

  count = 0;
  i = 0;
  while(strs[i])
  {
    j = 0;
    while(strs[i][j])
    {
      count++;
      j++;
    }
    i++;
  }
  // count *= size;
  (void)size;
  printf("%d\n", count);
  return (sep);
}

int main(void)
{
  char *strs[] = {"Hello", "World", "69"};
  ft_strjoin(3, strs, " ");
  return (0);
}
