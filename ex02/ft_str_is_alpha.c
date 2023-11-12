/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 20:18:00 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/23 21:05:48 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		index;
	char	to_check;

	index = 0;
	while (str[index] != '\0')
	{
		to_check = str[index];
		if ((to_check < 'A' || to_check > 'z') && to_check != ' ')
		{
			return (0);
		}
		if (to_check > 90 && to_check < 97)
		{
			return (0);
		}
		index++;
	}
	return (1);
}
/*
int	main(void)
{
	int	only_chars;
	int	no_chars;
	int empty;

	only_chars = ft_str_is_alpha("lolololooloo");
	no_chars = ft_str_is_alpha("lololol^ooloo");
	empty = ft_str_is_alpha(" ");

	printf("only chars: %d\n", only_chars);
	printf("no chars: %d\n", no_chars);
	printf("string is empty: %d\n", empty);
	return (0);
}
*/
