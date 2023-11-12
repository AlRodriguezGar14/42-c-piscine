/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:38:20 by alberrod          #+#    #+#             */
/*   Updated: 2023/11/02 21:53:26 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		idx;

	idx = 0;
	while (src[idx] != 0)
		idx++;
	dest = (char *)malloc((idx + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	idx = 0;
	while (src[idx] != 0)
	{
		dest[idx] = src[idx];
		idx++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hola Mundo";
	printf("%s\n", ft_strdup(str));

	return (0);
}
*/
