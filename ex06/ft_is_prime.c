/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:01:13 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/31 21:48:14 by alberrod         ###   ########.fr       */
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
/*
int	main(void)
{
	int n;
	printf("Write the input: ");
	scanf("%d", &n);
	printf("Is %d prime (1 yes, 0 no)? %d\n", n, ft_is_prime(n));
	return (0);
}
*/
