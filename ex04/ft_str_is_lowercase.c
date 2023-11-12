/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 22:44:18 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/25 16:30:16 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		index;
	char	to_compare;

	index = 0;
	while (str[index] != '\0')
	{
		to_compare = str[index];
		if (!(to_compare >= 'a' && to_compare <= 'z'))
			return (0);
	index++;
	}
	return (1);
}
/*
int	main(void)
{
	int	only_lower;
	int	lower_upper;
	int	empty;

	only_lower = ft_str_is_lowercase("aaaaaa");
	lower_upper = ft_str_is_lowercase("aaAAAAaa");
	empty = ft_str_is_lowercase(" ");
	printf("only lower: %d\n", only_lower);
	printf("lower_upper: %d\n", lower_upper);
	printf("empty: %d\n", empty);
	return (0);
}
*/
