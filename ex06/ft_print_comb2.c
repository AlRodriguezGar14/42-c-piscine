/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:05:05 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/16 14:48:05 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '9' && c == '9' && d == '9'))
	{
		write(1, ", ", 2);
	}
}

// The content of the array num is equivalent to ab cd
// num[0] is a
// num [1] is b
// num [2] is c
// num [3] is d
void	ft_print_comb2(void)
{
	char	num[4];

	num[0] = '0';
	while (num[0] <= '9')
	{
		num[1] = '0';
		while (num[1] <= '9')
		{
			num[2] = '0';
			while (num[2] <= '9')
			{
				num[3] = '0';
				while (num[3] <= '9')
				{
					ft_printchar(num[0], num[1], num[2], num[3]);
					num[3]++;
				}
				num[2]++;
			}
			num[1]++;
		}
	num[0]++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
