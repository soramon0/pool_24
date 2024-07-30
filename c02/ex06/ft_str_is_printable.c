/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 22:42:30 by klaayoun          #+#    #+#             */
/*   Updated: 2024/07/28 22:43:19 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (ft_is_printable(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
/*
int main()
{
  printf("%d\n", ft_str_is_printable("lkjKDSJ2315464,,.'];"));
  return 0;
}
*/
