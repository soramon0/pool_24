/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:21:28 by klaayoun          #+#    #+#             */
/*   Updated: 2024/07/24 16:38:24 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

void	ft_putchar3(char c)
{
	write(1, &c, 1);
}

void	ft_printdigits(int a, int b, int c, int sep)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (sep)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int	*ft_createdigits(void)
{
	static int	digits[10];

	digits[0] = 0;
	digits[1] = 1;
	digits[2] = 2;
	digits[3] = 3;
	digits[4] = 4;
	digits[5] = 5;
	digits[6] = 6;
	digits[7] = 7;
	digits[8] = 8;
	digits[9] = 9;
	return (digits);
}

void	ft_print_comb(void)
{
	int		*d;
	int		l;
	int		i;
	int		j;
	int		k;

	d = ft_createdigits();
	l = 10;
	i = 0;
	while (i < l)
	{
		j = i + 1;
		while (j < l)
		{
			k = j + 1;
			while (k < l)
			{
				ft_printdigits(d[i], d[j], d[k], i < d[l - 1] - 2);
				k++;
			}
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}
