/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:08:34 by klaayoun          #+#    #+#             */
/*   Updated: 2024/07/29 15:16:48 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (i < size)
			dest[i] = src[i];
		i++;
	}
	if (size <= 0)
		return (i);
	else if (size > i)
		dest[i] = '\0';
	else
		dest[size - 1] = '\0';
	return (i);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char *src = "Hello";
	char *mine = NULL;
	int mine_l = ft_strlcpy(mine, src, 2);
	printf("Src = %s\n", src);
	printf("Want Mine = %s\n", mine); 
	printf("Length = %d\n", mine_l); 
	// char org[10];
	// int org_l = strlcpy(org, src, 2);
	// printf("Want Org = %s\n", org); 
	// printf("Length = %d\n", org_l); 
	return 0;
}
