/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:36:38 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/08 17:01:50 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_rev_char_tab(char *tab, int size);

int		ft_strlen(char *str);

int		ft_isspace(unsigned char c);

int		ft_valid(char *str, int size);

char	*ft_heart_empty(void)
{
	char	*c;

	c = (char *)malloc(sizeof(char) * 2);
	if (!c)
		return (NULL);
	c[0] = '0';
	c[1] = '\0';
	return (c);
}

int	get_nbr_size(long num, int base_len)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	while (num)
	{
		num /= base_len;
		i++;
	}
	return (i);
}

char	*ft_int_to_base(int nbr, char *base, int base_len)
{
	long	num;
	char	*c;
	int		i;

	num = nbr;
	i = 0;
	if (num == 0)
		return (ft_heart_empty());
	c = (char *)malloc(sizeof(char) * (get_nbr_size(num, base_len) + 1));
	if (!c)
		return (NULL);
	if (num < 0)
		num *= -1;
	while (num)
	{
		c[i++] = base[num % base_len];
		num /= base_len;
	}
	if (nbr < 0)
		c[i++] = '-';
	ft_rev_char_tab(c, i);
	c[i] = '\0';
	return (c);
}

int	ft_atoi(char *str, int i, char *base, int base_len)
{
	int	j;
	int	r;
	int	s;

	r = 0;
	s = 1;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			s *= -1;
	}
	while (str[i])
	{
		j = 0;
		while (base[j] && str[i] != base[j])
			j++;
		if (j == base_len)
			break ;
		r = (r * base_len) + j;
		i++;
	}
	return (r * s);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*c;
	int		decimal;
	int		from_len;
	int		to_len;

	from_len = ft_strlen(base_from);
	to_len = ft_strlen(base_to);
	if (!ft_valid(base_from, from_len) || !ft_valid(base_to, to_len))
		return (NULL);
	decimal = ft_atoi(nbr, 0, base_from, from_len);
	c = ft_int_to_base(decimal, base_to, to_len);
	return (c);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *str = "    --++-80000000";
// 	char *base_from = "0123456789abcdef";
// 	int from_len = 16;
// 	char *base_to = "01";
// 	int to_len = 2;
// 	int r1 = ft_atoi(str, 0, base_from, from_len);
// 	printf("ft_atoi('%s', '%s', %d) = %d\n", \
// 	str, base_from, from_len, r1);
// 	char *r2 = ft_int_to_base(r1, base_to, to_len);
// 	printf("ft_int_to_base(%d, '%s', %d) = %s\n", r1, base_to, to_len, r2);
// 	char *r3 = ft_convert_base(str, base_from, base_to);
// 	printf("ft_convert_base('%s', '%s', '%s') = %s\n", str, \
// 	base_from, base_to, r3);
// 	return (0);
// }
