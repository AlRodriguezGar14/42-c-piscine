/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:54:33 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/15 20:05:04 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	printable_number;
	char	maximum_number;

	printable_number = '0';
	maximum_number = '9';
	while (printable_number <= maximum_number)
	{
		write(1, &printable_number, 1);
		printable_number++;
	}
}
