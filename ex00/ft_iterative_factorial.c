/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:27:42 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/31 14:25:19 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	factorial = 1;
	i = 0;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}
/*
int	main(void)
{
	printf("factorial of 5: %d\n", ft_iterative_factorial(5));
	return (0);
}
*/
