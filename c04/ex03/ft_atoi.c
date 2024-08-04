/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:12:44 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/01 18:16:57 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnum(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\f' || c == '\n' || c == '\v' || c == '\r' || c == ' ');
}

int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	r = 0;
	s = 1;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (ft_isnum(str[i]))
	{
		r = (r * 10) + str[i] - '0';
		i++;
	}
	return (r * s);
}
// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char *s1 = " ----++312k3";
// 	int r1 = atoi(s1);
// 	printf("atoi(%s) = \"%d\"\n", s1, r1);
//
// 	int r2 = ft_atoi(s1);
// 	printf("ft_atoi(%s) = \"%d\"\n", s1, r2);
// 	return (0);
// }
