/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:36:16 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/26 22:28:54 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	src_index;

	index = 0;
	src_index = 0;
	while (dest[index] != '\0')
		index++;
	while (src[src_index] != '\0' && src_index < nb)
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
	ft_strncat(&dest[0], &src[0], 2);
	printf("destination: %s\n", dest);
	return (0);
}
*/
