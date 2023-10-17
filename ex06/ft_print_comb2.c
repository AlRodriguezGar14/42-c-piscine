/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:58:03 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/17 17:20:28 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	printer[5];

	printer[2] = ' ';
	a = 0;
	while (a < 99)
	{
		printer[0] = a / 10 + '0';
		printer[1] = a % 10 + '0';
		b = a + 1;
		while (b <= 99)
		{
			printer[3] = b / 10 + '0';
			printer[4] = b % 10 + '0';
			write(1, printer, 5);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
