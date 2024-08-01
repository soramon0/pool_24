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

int	ft_isspace(unsigned char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\r' || c == ' ');
}

int	ft_iseven(int n)
{
	return (n % 2 == 0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	while (str && ft_isspace(str[i]))
		i++;
	s = 0;
	while (str && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			s++;
		i++;
	}
	r = 0;
	while (str && str[i] && ft_isnum(str[i]))
	{
		r *= 10;
		r += str[i] - '0';
		i++;
	}
	if (!ft_iseven(s))
		return (r * -1);
	return (r);
}
// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char *s1 = "  312k3";
// 	int r1 = atoi(s1);
// 	printf("atoi(%s) = %d\n", s1, r1);
//
// 	char *s2 = NULL;
// 	int r2 = ft_atoi(s2);
// 	printf("ft_atoi(%s) = %d\n", s2, r2);
// 	return (0);
// }
