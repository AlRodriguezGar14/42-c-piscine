/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:22:20 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/25 20:40:57 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		index;
	char	to_compare;

	index = 0;
	while (str[index] != '\0')
	{
		to_compare = str[index];
		if (!(to_compare >= 'A' && to_compare <= 'Z'))
			return (0);
	index++;
	}
	return (1);
}
/*
int	main(void)
{
	int	only_upper;
	int	lower_upper;
	int	empty;

	only_upper = ft_str_is_uppercase("AAAAA");
	lower_upper = ft_str_is_uppercase("aaAAAAaa");
	empty = ft_str_is_uppercase(" ");
	printf("only upper: %d\n", only_upper);
	printf("lower_upper: %d\n", lower_upper);
	printf("empty: %d\n", empty);
	return (0);
}
*/
