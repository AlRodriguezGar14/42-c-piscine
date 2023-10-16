/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:17:56 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/16 22:46:24 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	int n;
	int tmp;
	char printable;

	n = 10;
	tmp = nb;

	// TODO: Convert nb to positive if negative and print - before any operation
	// nb = nb * -1
	// write(1, '-', 1)
	
	// This tells the function how many loops to execute
	while (tmp > 90)
	{
		tmp = tmp / 10;
		n = n * 10;
	}

	// This is the conversor
	while (n > 0)
	{
		printable = (nb / n) + '0';
		write(1, &printable, 1);

		// Remove the already printed value
		nb = nb % n;

		// Reduce the loop by one
		n = n / 10;
	}
}

int	main(void)
{
	ft_putnbr(4242);
	return (0);
}
