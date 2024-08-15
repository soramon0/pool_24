/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:14:18 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/15 16:17:48 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	if (!tab || length <= 0)
		return ;
	i = 0;
	while (i < length)
		(*f)(tab[i++]);
}
// #include <stdio.h>
// void	printd(int n)
// {
// 	printf("%d\n", n);
// }
// int	main(void)
// {
// 	int arr[] = {0, 1, 2, 3, 5};
// 	ft_foreach(arr, 5, &printd);
// 	return (0);
// }
