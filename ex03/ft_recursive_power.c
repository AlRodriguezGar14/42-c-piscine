/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 01:19:36 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/31 02:22:11 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}
/*
int	main (void)
{
	printf("10 power 3 is %d\n", ft_recursive_power(10, 3));
	printf("10 power 0 is %d\n", ft_recursive_power(10, 0));
	printf("10 power 1 is %d\n", ft_recursive_power(10, 1));
	printf("10 power -3 is %d\n", ft_recursive_power(10, -3));
	return (0);
}
*/
