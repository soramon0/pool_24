/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:26:13 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/15 16:26:38 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*r;

	r = malloc(sizeof(int) * length);
	if (!r)
		return (NULL);
	i = 0;
	while (i < length)
	{
		r[i] = (*f)(tab[i]);
		i++;
	}
	return (r);
}
// #include <stdio.h>
// int	power(int n)
// {
// 	return (n * n);
// }
// int	main(void)
// {
// 	int arr[] = {6, 1, 2, 3, 5};
// 	int size = 5;
// 	int i = 0;
// 	int *r = ft_map(arr, size, &power);
// 	while (i < size)
// 		printf("%d\n", r[i++]);
// 	return (0);
// }
