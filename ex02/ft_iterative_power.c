/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 01:13:35 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/31 14:27:50 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	base_nbr;

	base_nbr = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= base_nbr;
		power--;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("10 power 3 is %d\n", ft_iterative_power(10, 3));
	printf("10 power 0 is %d\n", ft_iterative_power(10, 0));
	printf("10 power 1 is %d\n", ft_iterative_power(10, 1));
	printf("10 power -3 is %d\n", ft_iterative_power(10, -3));
	return (0);
}
*/
