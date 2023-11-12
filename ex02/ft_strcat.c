/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:48:47 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/26 17:51:49 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	src_index;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	src_index = 0;
	while (src[src_index] != '\0')
	{
		dest[index] = src[src_index];
		index++;
		src_index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[100] = "hello ";
	char	src[] = "world";
	printf("Dest: %s\n", dest);
	printf("Src: %s\n", src);
	ft_strcat(&dest[0], &src[0]);
	printf("destination: %s\n", dest);
	return (0);
}
*/
