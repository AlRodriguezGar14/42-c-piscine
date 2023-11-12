/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 20:17:03 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/28 21:00:50 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	ft_sort(int* key, char* value[], int size)
{
	char	*tmp_value;
	int		tmp_key;
	int		i;
	
	i = 1;
	while (i < size)
	{
		if (key[i - 1] > key[i])
		{
			tmp_key = key[i];
			key[i] = key[i - 1];
			key[i - 1] = tmp_key;

			tmp_value = value[i];
			value[i] = value[i - 1];
			value[i - 1] = tmp_value;
			i = 1;
		}
		i++;
	}
}


void print_arrays(int *key, char *value[], int size) {
    printf("Sorted key array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", key[i]);
    }
    printf("\n");

    printf("Sorted value array: ");
    for (int i = 0; i < size; i++) {
        printf("%s ", value[i]);
    }
    printf("\n");
}


int	main(void)
{
	int key[] = {1 ,6 ,7, 4, 3, 5, 7, 4, 2, 4, 5, 7};
	char *value[] = {"one","six", "seven", "four", "three", "five", "seven", "four", "two", "four", "five", "seven"};

	ft_sort(key, value, 12);
	print_arrays(key, value, 12);
	return (0);
}
