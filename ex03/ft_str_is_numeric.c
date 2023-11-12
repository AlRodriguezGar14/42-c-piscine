/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:09:55 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/23 21:24:34 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		index;
	char	to_compare;

	index = 0;
	while (str[index] != '\0')
	{
		to_compare = str[index];
		if ((to_compare < 48 || to_compare > 57) && to_compare != ' ')
			return (0);
		index++;
	}
	return (1);
}
/*
int	main(void)
{
	int	only_numbers;
	int	everything;
	int	empty;

	only_numbers = ft_str_is_numeric("123456");
	everything = ft_str_is_numeric("123r23231");
	empty = ft_str_is_numeric(" ");
	printf("only numbers: %d\n", only_numbers);
	printf("everything: %d\n", everything);
	printf("empty: %d\n", empty);
	return (0);
}
*/
