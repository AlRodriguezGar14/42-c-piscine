/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:34:19 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/31 22:32:32 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	x;

	x = 1;
	while (x * x <= nb)
	{
		printf("int %ld\n", x);
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}

int	main(void)
{
	int input;

	printf("Input: ");
	scanf("%d", &input);
	printf("The integer square root of %d is: %d", input, ft_sqrt(input));
	return (0);
}

