/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:42:33 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/15 17:51:57 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, char initial, char mid, char end)
{
	int		initial_x;
	int		total_length;

	initial_x = 0;
	total_length = x - 1;
	write(1, &initial, 1);
	initial_x++;
	while (initial_x < x)
	{
		if (initial_x == total_length)
		{
			write(1, &end, 1);
		}
		else
		{
			write(1, &mid, 1);
		}
		initial_x++;
	}
	write(1, &"\n", 1);
}
