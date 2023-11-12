/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:21:03 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/18 20:32:36 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_alphabet(void)
{
	char	alfabeto;

	alfabeto = 'a';
	while (alfabeto <= 'z')
	{
		write(1, &alfabeto, 1);
		alfabeto++;
	}
}

/* int	main(void) */
/* { */
/* 	ft_print_alphabet(); */
/* 	return (0); */
/* } */
