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
	char	c[10];
	long	num;
	int		i;

	num = nb;
	i = 0;
	if (num < 0) {
		num *= -1;
		ft_putchar('-');
	}
	if (num >= 0 && num <= 9)
	{
		ft_putchar(num + '0');
		return ;
	}
	while (num % 10)
	{
		c[i++] = num % 10 + '0';
		num /= 10;
	}
	while(i >= 0)
		ft_putchar(c[--i]);
}
