/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:28:53 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/16 11:42:51 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char numeral;
	char decimal;
	char hundreth;

	hundreth  = '0';

	while ((hundreth < decimal || hundreth != decimal))
	{
		decimal = hundreth + 1;
		while ((decimal < numeral || decimal != numeral))
		{
			numeral = decimal + 1;
			while (numeral <= '9')
			{
				write(1, &hundreth, 1);
				write(1, &decimal, 1);
				write(1, &numeral, 1);
				if (!(numeral  == '9' && decimal == '8' && hundreth == '7'))
				{
					write(1, ", ", 2);
				}

				numeral++;
			}
			decimal++;
		}
		hundreth++;
	}

}


int	main()
{
	ft_print_comb();
	return (0);
}
