/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:53:39 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/03 14:22:03 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_isspace(unsigned char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\r' || c == ' ');
}

int	ft_atoi(char *str, char *base, int base_len)
{
	int	i;
	int	j;
	int	r;
	int	s;

	i = 0;
	s = 1;
	r = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i])
	{
		j = 0;
		while (str[i] && base[j] && str[i] != base[j])
			j++;
		if (j == base_len)
			break ;
		r = (r * base_len) + j;
		i++;
	}
	return (r * s);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (!ft_valid(base, base_len))
		return (0);
	while (str && ft_isspace(*str))
		str++;
	return (ft_atoi(str, base, base_len));
}
// #include <stdlib.h>
// #include <stdio.h>
// int	main(void)
// {
// 	int r1 = ft_atoi_base("70000000", "0123456789abcdef");
// 	int r2 = atoi("69k");
// 	printf("%d\n", r1);
// 	printf("%d\n", r2);
// 	return (0);
// }