/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:05:58 by alberrod          #+#    #+#             */
/*   Updated: 2023/11/02 19:30:37 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	idx;
	int	*arr;
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (-1);
	idx = 0;
	while (min < max)
	{
		arr[idx] = min;
		idx++;
		min++;
	}
	*range = arr;
	return (size);
}
/*
#include <stdio.h>

int main() {
    int *range = NULL;
    int min, max;

    printf("Enter the minimum value: ");
    scanf("%d", &min);

    printf("Enter the maximum value: ");
    scanf("%d", &max);

    int result = ft_ultimate_range(&range, min, max);

    if (result == -1) {
        printf("Memory allocation failed.\n");
    } else if (result == 0) {
        printf("No range to create.\n");
    } else {
        printf("Range created successfully. Result size: %d\n", result);
        printf("Elements in the range: ");

        int i = 0;  // Initialize a counter for the while loop
        while (i < result) {
            printf("%d ", range[i]);
            i++;
        }
        printf("\n");
    }

    free(range);
    return 0;
}
*/
