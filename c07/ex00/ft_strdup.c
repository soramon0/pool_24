/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:54:03 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/06 19:54:31 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	while (src[i])
		i++;
	cpy = malloc(sizeof(char) * i + 1);
	if (!cpy)
		return (0);
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *cpy = ft_strdup("Hello World");
// 	printf("%s\n", cpy);
// 	char *cpy1 = strdup("Hello World");
// 	printf("%s\n", cpy1);
// 	return (0);
// }
