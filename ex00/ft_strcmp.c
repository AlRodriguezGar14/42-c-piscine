/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 03:25:55 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/26 22:27:38 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] != '\0') && (s2[index] != '\0'))
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (s1[index] - s2[index]);
}
/*
int	main(void)
{
	char 	base[] = "Testeo y luego leo";
	char 	same[] = "Testeo y luego leo";
	char 	diff[] = "Testeo y  ya";
	int		bothsame;
	int		different;
	int		different2;

	bothsame = ft_strcmp(&base[0], &same[0]);
	different = ft_strcmp(&base[0], &diff[0]);
	different2 = ft_strcmp(&diff[0], &base[0]);

	printf("Same: %d\nDifferent (s2 shorter): %d\n", bothsame, different);
	printf("Different (s2 longer): %d\n", different2);
	
	return (0);
}
*/
