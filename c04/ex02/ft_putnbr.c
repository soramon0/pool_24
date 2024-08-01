/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:26:06 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/01 14:41:25 by klaayoun         ###   ########.fr       */
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
	int		i;
	long	num;

	if (nb == 0)
	{
		ft_putchar('0');
	}
	i = 0;
	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	while (num)
	{
		c[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (i > 0)
		ft_putchar(c[--i]);
}
// int	main(void)
// {
// 	ft_putnbr(2147483647);
// 	return (0);
// }
