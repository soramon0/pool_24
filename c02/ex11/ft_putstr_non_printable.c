/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:01:06 by klaayoun          #+#    #+#             */
/*   Updated: 2024/07/29 20:35:23 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_non_printable(unsigned char c)
{
	if (c <= 31 || c >= 127)
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
	while (i > 0)
		ft_putchar(c[--i]);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i])
	{
		c = (unsigned char)str[i];
		if (ft_is_non_printable(c))
		{
			write(1, "\\", 1);
			int_to_hex(c);
		}
		else
			ft_putchar(c);
		i++;
	}
}
int main()
{
  ft_putstr_non_printable("Coucou\ntu vas bien\b?");
  return (0);
}
