/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:04:28 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/31 21:47:50 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
int	main(void)
{
	int n;
	printf("Write the input: ");
	scanf("%d", &n);
	printf("Next prime of %d is %d\n", n, ft_find_next_prime(n));
	return (0);
}
*/
