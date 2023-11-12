/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:23:01 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/21 01:20:44 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp[1000];
	int	index;
	int	max;

	index = 0;
	max = size;
	while (index < max)
	{
		tmp[index] = tab[size - 1];
		index++;
		size--;
	}
	index = 0;
	while (index < max)
	{
		tab[index] = tmp[index];
		index++;
	}
}
/*
int	main(void)
{
	int	index;
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	index = 0;
	ft_rev_int_tab(&arr[0], 10);
	while(index < 10)
	{
		printf("%d", arr[index]);
		index++;
	}
	return (0);
}
*/
