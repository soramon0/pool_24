/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:26:01 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/15 17:27:47 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			r++;
		i++;
	}
	return (r);
}
// int contains_char(char *str)
// {
// 	int i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == 'K' || str[i] == 'k')
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }
// #include <stdio.h>
// int	main(int ac, char **av)
// {
// 	int r = ft_count_if(++av, ac - 1, &contains_char);
// 	printf("%d\n", r);
// 	return (0);
// }
