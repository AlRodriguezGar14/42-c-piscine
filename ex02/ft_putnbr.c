/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 00:18:11 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/28 00:36:46 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	operator;
	long	tmp;
	long	output;

	operator = 1;
	output = nb;
	if (output < 0)
	{
		output *= -1;
		write(1, "-", 1);
	}
	tmp = output;
	while (tmp > 9)
	{
		tmp /= 10;
		operator *= 10;
	}
	while (operator > 0)
	{
		nb = (output / operator) + '0';
		write(1, &nb, 1);
		output = output % operator;
		operator /= 10;
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/
