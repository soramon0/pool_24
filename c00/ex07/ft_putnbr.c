/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:03:34 by klaayoun          #+#    #+#             */
/*   Updated: 2024/07/24 21:03:41 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long num;

	num = (long)nb;
	if (num < 0) {
		num *= -1;
		ft_putchar('-');
	}
	if (num <= 9)
	{
		ft_putchar(num + '0');
		return;
	}
	ft_putnbr(num / 10);
	ft_putnbr(num % 10);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
