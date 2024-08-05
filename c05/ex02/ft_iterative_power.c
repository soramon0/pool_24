/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:02:58 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/05 20:03:16 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power > 0)
	{
		r *= nb;
	}
	return (r);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(2, 2));
// 	return (0);
// }
