/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:39:38 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/17 17:28:10 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		base_number;
	char	out[3];

	base_number = 0;
	while (base_number < 999)
	{
		out[0] = base_number / 100 + '0';
		out[1] = (base_number % 100) / 10 + '0';
		out[2] = (base_number % 10) % 10 + '0';

		if(!(out[0] >= out[1] || out[1] >= out[2] || out[0] >= out[2]))
		{
			write(1, &out, 3);
			if (out[0] < '7')
				write(1, ", ", 2);
		}
		base_number++;
	}
}

int	main(void)
{
	ft_print_comb();
	return 0;
}
