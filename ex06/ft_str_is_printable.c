/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:53:08 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/24 20:54:48 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		index;
	char	compare;

	index = 0;
	while (str[index] != '\0')
	{
		compare = str[index];
		if ((compare < 33 || compare > 126) && compare != ' ')
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
	int	only_printable;
	int	not_printable;
	int	empty;

	only_printable = ft_str_is_printable("AAAAA");
	not_printable = ft_str_is_printable("aaA\nAAaa");
	empty = ft_str_is_printable(" ");
	printf("only printable: %d\n", only_printable);
	printf("no printable: %d\n", not_printable);
	printf("empty: %d\n", empty);
	return (0);
}
*/
