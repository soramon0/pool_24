/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:18:05 by klaayoun          #+#    #+#             */
/*   Updated: 2024/07/31 14:18:08 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*c1;
	unsigned char	*c2;

	if (n == 0)
		return (0);
	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (c1[i] && c2[i] && c1[i] == c2[i] && i < n - 1)
		i++;
	return (c1[i] - c2[i]);
}
// #include <string.h>
// #include <stdio.h>
// #define CASE_SIZE 7
// int main()
// {
// 	char *s1 = "abcdeofgh";
// 	char *s2 = "abcdoofgh";
// 	unsigned int cases[CASE_SIZE] = {0,1,2,3,4,5,6};
// 	int i = 0;
// 	while (i < CASE_SIZE)
// 	{
// 		int r1 = strncmp(s1, s2, cases[i]);
// 		int r2 = ft_strncmp(s1, s2, cases[i]);
// 		printf("strncmp(%s, %s, %d) = %d\n", s1, s2, cases[i], r1);
// 		printf("ft_strncmp(%s, %s, %d) = %d\n", s1, s2, cases[i], r2);
// 		if (i != CASE_SIZE - 1)
// 			printf("--------------\n");
// 		i++;
// 	}
// 	return (0);
// }
