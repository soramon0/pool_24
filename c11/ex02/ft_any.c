/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:47:08 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/15 16:48:52 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			return (1);
		i++;
	}
	return (0);
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
// 	(void)ac;
// 	int r = ft_any(++av, &contains_char);
// 	printf("%d\n", r);
// 	return (0);
// }
