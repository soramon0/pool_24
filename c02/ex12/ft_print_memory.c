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

void	ft_puthex(long nb)
{
	char	c[64];
	char	*hex;
	int		i;

	i = 0;
	hex = "0123456789abcdef";
	while (nb)
	{
		c[i++] = hex[(nb % 16)];
		nb /= 16;
	}
	write(1, "x0", 2);
	while (i > 0)
		write(1, &c[--i], 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*str;

	str = (char *)addr;
	while (*str)
	{
		ft_puthex((long)str);
		write(1, ": ", 2);
		write(1, "\n", 1);
		str = str + 16;
	}
	return (addr);
}

int	main(void)
{
	char *input = "Bonjour les amin";
	ft_print_memory(&input, 16);
	return (0);
}
