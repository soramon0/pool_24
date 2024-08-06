/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:40:35 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/06 18:40:37 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
  if (nb <= 0)
    return (0);
  if (nb == 1)
    return (0);
  return ((nb / 1 == nb) && (nb / nb == 1));
}
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_prime(4));
	return (0);
}