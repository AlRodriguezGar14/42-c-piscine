/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:59:28 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/18 20:22:26 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n)
{
	char arr[10];
	int i;
	char max;
	int array_length;
	int loop;

	arr[0] = '0';
	i = 1;
	max = '9';
	array_length = n;

	// Sets the first line
	while(i <= n)
	{
		arr[i] = i + '0';
		i++;
	}

	while (n > 0)
	{
		while (arr[n-1] <= max)
		{
			write(1, arr, array_length);
			write(1, "\n", 1);
			arr[n-1] = arr[n-1] + 1;
		} 
		while(arr[n - 2] != max - 1)
		{
			if (arr[n -2] + 1 != arr[n-1])
			{
				arr[n-2] = arr[n-2] + 1;
				arr[n-1] = arr[n-2] + 1;
			while (arr[n-1] < max)
			{
				write(1, arr, array_length);
				write(1, "\n", 1);
				arr[n-1] = arr[n-1] + 1;
			}
			}
		}
		max--;
		n--;
	}


	/* while(n > 0) */
	/* { */
	/* 	write(1, arr, array_length); */
	/* 	write(1, "\n", 1); */


	/* 	while(arr[n - 1] < max) */
	/* 	{ */
	/* 		arr[n - 1] = arr[n - 1] + 1; */
	/* 	} */
	/* 	write(1, arr, array_length); */
	/* 	n--; */
	/* 	max--; */
	/* } */
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
