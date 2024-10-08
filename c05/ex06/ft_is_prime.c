/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:40:35 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/12 13:36:00 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	limit;
	int	i;

	if (nb <= 1)
		return (0);
	limit = nb / 2;
	i = 2;
	while (i <= limit)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(7));
// 	return (0);
// }
