/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:17:56 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/17 20:48:24 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		n;
	long	operator;
	long	tmp;
	char	printable;

	n = 1;
	operator = nb;
	if (operator < 0)
	{
		operator = operator * -1;
		write(1, "-", 1);
	}
	tmp = operator;
	while (tmp > 9)
	{
		tmp = tmp / 10;
		n = n * 10;
	}
	while (n > 0)
	{
		printable = (operator / n) + '0';
		write(1, &printable, 1);
		operator = operator % n;
		n = n / 10;
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
