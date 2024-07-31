/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:41:56 by klaayoun          #+#    #+#             */
/*   Updated: 2024/07/31 16:49:54 by klaayoun         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				s1_len;
	int				s2_len;
	unsigned int	i;

	s1_len = ft_strlen(dest);
	s2_len = ft_strlen(src);
	i = 0;
	if (s2_len == 0 || nb == 0)
		return (dest);
	while (src[i] && i < nb)
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
// 	char addition[] = " World";
// 	unsigned int nb = 6;
// 	char *r1 = strncat(a1, addition, nb);
// 	printf("strncat(\"%s\", \"%s\", %d) = \"%s\"\n", a1, addition, nb, r1);
//
// 	char b1[50] = "Hello";
// 	char *r2 = ft_strncat(b1, addition, nb);
// 	printf("ft_strncat(\"%s\", \"%s\", %d) = \"%s\"\n", b1, addition, nb, r2);
// 	return (0);
// }
