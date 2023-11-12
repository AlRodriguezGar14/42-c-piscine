/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 02:03:50 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/23 15:33:19 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	tmp;

	index = -1;
	while (index++ < size - 2)
	{
		if (tab[index] > tab[index + 1])
		{
			tmp = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = tmp;
			index = -1;
		}
	}
}
/*
int	main(void)
{
	int arr[] = {2, 3, 1, 5, 7, 6, 4};
	ft_sort_int_tab(&arr[0], 7);

	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);
	printf("%d\n", arr[5]);
	printf("%d\n", arr[6]);
	return (0);
}
*/
