/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:53:19 by klaayoun          #+#    #+#             */
/*   Updated: 2024/07/31 15:54:37 by klaayoun         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	s1_len;
	int	s2_len;
	int	i;

	s1_len = ft_strlen(dest);
	s2_len = ft_strlen(src);
	i = 0;
	if (s2_len == 0)
		return (dest);
	while (src[i])
	{
		dest[i + s1_len] = src[i];
		i++;
	}
	dest[i + s1_len] = '\0';
	return (dest);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char a1[50] = "Hello";
// 	char a2[] = " World";
// 	char *r1 = strcat(a1, a2);
// 	printf("strcat(\"%s\", \"%s\") = \"%s\"\n", a1, a2, r1);
//
// 	char b1[50] = "Hello";
// 	char b2[] = " World";
// 	char *r2 = ft_strcat(b1, b2);
// 	printf("ft_strcat(\"%s\", \"%s\") = \"%s\"\n", b1, b2, r2);
// 	return (0);
// }
