/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:17:56 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/17 12:30:27 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	int		n;
	int		tmp;
	char	printable;

	n = 10;
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	tmp = nb;
	while (tmp > 90)
	{
		tmp = tmp / 10;
		n = n * 10;
	}
	while (n > 0)
	{
		printable = (nb / n) + '0';
		write(1, &printable, 1);
		nb = nb % n;
		n = n / 10;
	}
}

/* int	main(void) */
/* { */
/* 	ft_putnbr(-444); */
/* 	return (0); */
/* } */
