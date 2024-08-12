/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:23:40 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/12 13:37:09 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;
	int	target;

	if (nb == 1)
		return (1);
	target = nb / 2;
	x = 2;
	while (x <= target)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
// #include <stdio.h>
//
// int main(void)
// {
//   printf("%d\n", ft_sqrt(9));
//   return (0);
// }
