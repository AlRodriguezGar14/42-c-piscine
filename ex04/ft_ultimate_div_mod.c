/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 02:22:21 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/20 02:30:31 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_div;
	int	tmp_mod;

	tmp_div = *a / *b;
	tmp_mod = *a % *b;
	*a = tmp_div;
	*b = tmp_mod;
}
/*
int	main(void)
{
	int a;
	int  b;

	a = 4;
	b = 2;
	printf("a: %d\nb: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d\nb: %d\n", a, b);
	return (0);
}
*/
