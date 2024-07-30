/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 22:50:00 by klaayoun          #+#    #+#             */
/*   Updated: 2024/07/28 22:50:07 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	ft_strupcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == ' ')
		i++;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) && !is_alpha(str[i - 1]) && !is_digit(str[i - 1]))
			str[i] = ft_strupcase(str[i]);
		else
			str[i] = ft_strlowcase(str[i]);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
  char input[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *got = ft_strcapitalize(input);
	char *want = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
	printf("Got = %s\n", got);
	printf("Want = %s\n", want); 
  return 0;
}
*/
