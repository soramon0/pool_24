/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:25:54 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/14 17:38:12 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src, int size)
{
	int		i;
	char	*cpy;

	cpy = (char *)malloc(sizeof(char) * (size + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					size;
	struct s_stock_str	*r;

	r = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		size = ft_strlen(av[i]);
		r[i].size = size;
		r[i].str = av[i];
		r[i].copy = ft_strdup(av[i], size);
		if (!r[i].copy)
			return (NULL);
		i++;
	}
	r[i].str = 0;
	return (r);
}
// #include <stdio.h>
// void ft_show_tab(struct s_stock_str *par);
// typedef struct	s_stock_str
// {
// 	int		size;
// 	char	*str;
// 	char	*copy;
// }	t_stock_str;
// int main(int ac, char **av)
// {
// 	t_stock_str *r = ft_strs_to_tab(ac - 1, ++av);
// 	while (r && r->str)
// 	{
// 		printf("size = %d | str = '%s' | copy = '%s'\n", \
// 		r->size, r->str, r->copy);
// 		r++;
// 	}
// 	return (0);
// }
