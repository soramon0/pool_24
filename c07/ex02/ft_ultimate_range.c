/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:11:55 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/08 13:32:54 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	*range = NULL;
	if (min >= max)
		return (0);
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (!(*range))
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
//   int min = -5;
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
