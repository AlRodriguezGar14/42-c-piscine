/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:20:09 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/15 19:00:02 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, char initial, char mid, char end);

int	rush(int x, int y)
{
	int		initial_y;
	int		total_length;

	initial_y = 0;
	total_length = y - 1;
	if (x <= 0 || y <= 0)
	{
		write(2, "Incorrect input; it must be higher than 0\n", 42);
		return (1);
	}
	ft_putchar(x, 'A', 'B', 'C');
	initial_y++;
	while (initial_y < y)
	{
		if (initial_y == total_length)
		{
			ft_putchar(x, 'C', 'B', 'A');
		}
		else
		{
			ft_putchar(x, 'B', ' ', 'B');
		}
		initial_y++;
	}
	return (0);
}
