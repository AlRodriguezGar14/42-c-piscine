/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:13:45 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/20 01:29:46 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
/*
int	main(void)
{
	int a;
	int b;

	a = 2;
	b = 4;
	printf("%d%d\n", a, b);
	ft_swap(&a, &b);
	printf("%d%d", a, b);
	return (0);
}
*/
