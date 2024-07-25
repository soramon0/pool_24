/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_print_reverse_alphabet.c						:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: klaayoun <marvin@42.fr>					+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/07/24 14:04:44 by klaayoun		   #+#	  #+#			  */
/*	 Updated: 2024/07/24 14:10:44 by klaayoun		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 'z';
	while (i >= 'a')
	{
		ft_putchar(i);
		i--;
	}
}
