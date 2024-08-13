/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:51:35 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/08 13:36:08 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_strs(int size, char **strs)
{
	int	count;
	int	i;
	int	j;

	i = 0;
	count = 0;
	while (i < size && strs[i])
	{
		j = 0;
		while (strs[i][j++])
			count++;
		i++;
	}
	return (count);
}

char	*alloc_str(int size, char **strs, char *sep)
{
	int	count;
	int	i;

	count = ft_count_strs(size, strs);
	i = 0;
	while (sep[i] != '\0')
		i++;
	count = (count + (i * size)) - i;
	return ((char *)malloc(sizeof(char) * (count + 1)));
}

char	*my_heart_is_empty(void)
{
	char	*heart;

	heart = (char *)(malloc(sizeof(char)));
	if (!heart)
		return (NULL);
	heart[0] = '\0';
	return (heart);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		offset;
	char	*join;

	if (size == 0)
		return (my_heart_is_empty());
	join = alloc_str(size, strs, sep);
	if (!join)
		return (NULL);
	offset = 0;
	i = 0;
	while (i < size && strs[i])
	{
		j = 0;
		while (strs[i][j])
			join[offset++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			join[offset++] = sep[j++];
		i++;
	}
	join[offset] = '\0';
	return (join);
}
// #include <stdio.h>
// int main(void)
// {
//   char *strs[] = {"Hello", "World", "69"};
//   char *result = ft_strjoin(3, strs, "jomla espace jomla");
//   printf("%s\n", result);
//   free(result);
//   return (0);
// }
