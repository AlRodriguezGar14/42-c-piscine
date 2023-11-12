/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:43:41 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/25 20:38:46 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	dest_size;

	index = 0;
	while (index < size -1 && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	return (dest_size);
}
/*
int	main(void)
{
	char	hi_mom[] = "Hi Everyone";
	char	dest[5];
	
	ft_strlcpy(&dest[0], hi_mom, 5);
	printf("The copied content is: %s\n", dest);
	return (0);
}
*/
