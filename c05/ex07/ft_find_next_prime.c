/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:40:35 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/12 13:36:40 by klaayoun         ###   ########.fr       */
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
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(8));
// 	return (0);
// }
