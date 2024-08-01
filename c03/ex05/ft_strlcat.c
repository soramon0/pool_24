/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 20:15:24 by klaayoun          #+#    #+#             */
/*   Updated: 2024/07/31 20:46:26 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	i;

	s1_len = ft_strlen(dest);
	s2_len = ft_strlen(src);
	if (size == 0)
		return (s2_len);
	i = s1_len;
	while (src[i - s1_len] && i < size - 1)
	{
		dest[i] = src[i - s1_len];
		i++;
	}
	dest[i] = '\0';
	if (size > i)
		return (s1_len + s2_len);
	return (s1_len + i);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char a1[10] = "aaaa";
// 	char a2[] = "bbbbbbbbbbbbbbbbbbbb";
// 	unsigned int nb = 10;
// 	int r1 = strlcat(a1, a2, nb);
// 	printf("strlcat(\"%s\", \"%s\", %d) = %d\n", a1, a2, nb, r1);
//
// 	char b1[10] = "aaaa";
// 	char b2[] = "bbbbbbbbbbbbbbbbbbbb";
// 	int r2 = ft_strlcat(b1, b2, nb);
// 	printf("ft_strcat(\"%s\", \"%s\", %d) = %d\n", b1, b2, nb, r2);
// 	return (0);
// }
