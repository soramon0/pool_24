/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 21:40:01 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/01 23:01:58 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
		i++;
	return (i);
}

int	ft_valid(char *str, int size)
{
	int	i;
	int	j;

	i = 0;
	if (size <= 1)
		return (i);
	while (str[i])
	{
		j = i;
		while (str[i] && str[j + 1] && str[i] != str[j + 1])
			j++;
		if (j != size - 1)
			return (0);
		if (str[i] == '-' || str[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				base_len;
	long			num;
	unsigned char	c[50];
	unsigned int	i;

	base_len = ft_strlen(base);
	if (!ft_valid(base, base_len))
		return ;
	num = nbr;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	i = 0;
	while (num)
	{
		c[i++] = base[num % base_len];
		num /= base_len;
	}
	while (i > 0)
		ft_putchar(c[--i]);
}
// int	main(void)
// {
// 	ft_putnbr_base(69, "01234567");
// 	return (0);
// }
