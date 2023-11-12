/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:59:09 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/24 20:57:11 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Formula para el printable_hexadecimaladecimal:
las posibilidades son 0123456789abcdef

decimal / 16 (porque hay 16 posibilidades) saca la primera parte.
decimal % 16 saca la segunda (básicamente partir númeos como en c00).

Se busca el index de cada despuesta en las posibilidades y fiesta.
 */
void	ft_putstr_non_printable(char *str)
{
	char	printable_hexadecimal[3];

	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			printable_hexadecimal[0] = '\\';
			printable_hexadecimal[1] = "0123456789abcdef"[*str / 16];
			printable_hexadecimal[2] = "0123456789abcdef"[*str % 16];
			write(1, printable_hexadecimal, 3);
		}
		str++;
	}
}
/*
int	main(void)
{
	char	coucou[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(coucou);
	return (0);
}
*/
