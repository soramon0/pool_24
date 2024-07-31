/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:06:46 by klaayoun          #+#    #+#             */
/*   Updated: 2024/07/31 19:16:23 by klaayoun         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		needle_len;
	char	*ptr;

	i = 0;
	ptr = 0;
	needle_len = ft_strlen(to_find);
	if (needle_len == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			j++;
		if (j == needle_len)
		{
			ptr = &str[i];
			break ;
		}
		if (j > 0)
			i += j - 1;
		i++;
	}
	return (ptr);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char haystack[] = "Foo BaBar Baz Bar";
// 	char needle[] = "Bar";
// 	char *r1 = strstr(haystack, needle);
// 	printf("strstr(\"%s\", \"%s\") = \"%s\"\n", haystack, needle, r1);
//
// 	char *r2 = ft_strstr(haystack, needle);
// 	printf("ft_strstr(\"%s\", \"%s\") = \"%s\"\n", haystack, needle, r2);
// 	return (0);
// }
