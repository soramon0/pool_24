/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:58:54 by klaayoun          #+#    #+#             */
/*   Updated: 2024/07/29 18:59:40 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_non_printable(unsigned char c)
{
	if ((c >= 0 && c <= 31) || c == 127)
		return (1);
	return (0);
}

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	int_to_hex(int n)
{
	char	c[8];
	char	*hex;
	int		i;

	if (n < 16)
		ft_putchar('0');
	hex = "0123456789abcdef";
	i = 0;
	while (n)
	{
		c[i++] = hex[n % 16];
		n /= 16;
	}
	while (i >= 0)
		ft_putchar(c[--i]);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned long p = 0;

	if (size <= 0)
		return (addr);
	p = (unsigned long)p;
	i = (sizeof(p) << 3) - 4;
	while (i >= 0)
	{
		int_to_hex((p >> i) & 0xf);
		i -= 4;
	}
	return (addr);
}

int	main(void)
{
	int input = 1;
	ft_print_memory(&input, sizeof(input));
	return (0);
}
