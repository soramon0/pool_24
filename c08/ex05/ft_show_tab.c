/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:03:02 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/14 18:19:08 by klaayoun         ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	ft_show_tab(struct s_stock_str *par)
{
	if (!par || !par->str)
		return ;
	while (par->str)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		if (par->copy)
		{
			ft_putstr(par->copy);
			ft_putchar('\n');
		}
		par++;
	}
}
//
// struct s_stock_str *ft_strs_to_tab(int ac, char **av);
// typedef struct	s_stock_str
// {
// 	int		size;
// 	char	*str;
// 	char	*copy;
// }	t_stock_str;
//
// int main(int ac, char **av)
// {
// 	t_stock_str *r = ft_strs_to_tab(ac - 1, ++av);
// 	ft_show_tab(r);
// 	return (0);
// }
