/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaayoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:27:30 by klaayoun          #+#    #+#             */
/*   Updated: 2024/08/14 18:27:33 by klaayoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src, int size, int shouldalloc)
{
	int		i;
	char	*cpy;

	if (!shouldalloc)
		return (NULL);
	cpy = malloc(sizeof(char) * size);
	if (!cpy)
		return (NULL);
	i = 0;
	while (src[i] && i < size - 1)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int	ft_ischarset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] && c && charset[i] != c)
		i++;
	return (charset[i] != '\0');
}

int	get_str_size(char *str, char *charset)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && !ft_ischarset(str[i + j], charset))
			j++;
		if (j > 0)
		{
			size++;
			i += j - 1;
		}
		i++;
	}
	return (size);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_ischarset(str[i], charset))
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**r;
	int		i;
	int		j;
	int		k;
	int		size;

	i = 0;
	j = 0;
	r = (char **)malloc(sizeof(char *) * (get_str_size(str, charset) + 1));
	if (!r)
		return (NULL);
	while (str[i])
	{
		k = 0;
		size = ft_count_word(&str[i], charset);
		while (str[i + k] && ft_ischarset(str[i + k], charset))
			k++;
		r[j] = ft_strdup(&str[i], size + 1, size > 0);
		if (size > 0 && !r[j++])
			return (NULL);
		i += k + size;
	}
	r[j] = 0;
	return (r);
}

// #include <stdio.h>
// int main(void)
// {
// 	char **arr = ft_split("Hello World", ", ");
// 	if (!arr)
// 	{
// 		printf("Empty array\n");
// 		return (0);
// 	}
// 	int i = 0;
// 	while (arr[i])
// 	{
// 		printf("Arr[%d] = '%s'\n", i, arr[i]);
// 		i++;
// 	}
// 	return (0);
// }
