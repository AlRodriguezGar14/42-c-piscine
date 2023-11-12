/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:20:46 by alberrod          #+#    #+#             */
/*   Updated: 2023/11/02 19:30:01 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
/*
#include <stdio.h>

int main() {
    int min, max;
    int *result;

    printf("Enter min: ");
    scanf("%d", &min);

    printf("Enter max: ");
    scanf("%d", &max);

    result = ft_range(min, max);

    if (result == NULL) {
        printf("Error: min is greater than or equal to max\n");
    } else {
        printf("Result: ");
        int i = 0;
        while (i < (max - min)) {
            printf("%d ", result[i]);
            i++;
        }
        printf("\n");
    }

    free(result);
    return 0;
}
*/
