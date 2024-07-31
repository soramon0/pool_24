/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:15:23 by klaayoun          #+#    #+#             */
/*   Updated: 2024/07/30 20:47:50 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (c1[i] && c2[i] && c1[i] == c2[i])
		i++;
	return (c1[i] - c2[i]);
}
// #include <string.h>
// #include <stdio.h>
// #define CASE_SIZE 7
// int main()
// {
// 	char *s1[] = {"abcdeofgh", "abc", "1", "aaaa", "", "a", ""};
// 	char *s2[] = {"abcdeofgh", "abd", "", "aaaae", "", "", "a"};
// 	int i = 0;
// 	while (i < CASE_SIZE)
// 	{
// 		int r1 = strcmp(s1[i], s2[i]);
// 		int r2 = ft_strcmp(s1[i], s2[i]);
// 		printf("strncmp(%s, %s) = %d\n", s1[i], s2[i], r1);
// 		printf("ft_strncmp(%s, %s) = %d\n", s1[i], s2[i], r2);
// 		if (i != CASE_SIZE - 1)
// 			printf("--------------\n");
// 		i++;
// 	}
// 	return (0);
// }
