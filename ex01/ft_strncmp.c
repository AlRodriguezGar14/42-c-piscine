/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:38:18 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/26 16:37:21 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	if (index < n)
	{
		return (s1[index] - s2[index]);
	}
	return (0);
}
/*
int	main(void)
{
	char 	base[] = "Testeo y luego leo";
	char 	same[] = "Testeo y luego leo";
	char 	diff[] = "Testeo y ya";
	int		bothsame;
	int		different;
	int		different2;

	bothsame = ft_strncmp(&base[0], &same[0], 10);
	different = ft_strncmp(&base[0], &diff[0], 10);
	different2 = ft_strncmp(&diff[0], &base[0], 10);

	printf("Same: %d\nDifferent (s2 shorter): %d\n", bothsame, different);
	printf("Different (s2 longer): %d\n", different2);
	return (0);
}
*/
