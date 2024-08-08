/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:36:45 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/08 13:37:15 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isspace(unsigned char c)
{
	return (c == '\t' || c == '\f' || c == '\n' \
			|| c == '\v' || c == '\r' || c == ' ');
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
		if (str[i] == '-' || str[i] == '+' || ft_isspace(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_rev_char_tab(char *tab, int size)
{
	int		i;
	char	tmp;

	if (size <= 1)
		return ;
	i = 0;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = tmp;
		i++;
		size--;
	}
}
