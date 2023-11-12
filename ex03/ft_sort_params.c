/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:44:19 by alberrod          #+#    #+#             */
/*   Updated: 2023/11/01 19:28:30 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	compare_args(char *arg1, char *arg2)
{
	int	i;

	i = 0;
	while (arg1[i] != '\0' && arg2[i] != '\0')
	{
		if (arg1[i] != arg2[i])
			break ;
		i++;
	}
	return (arg1[i] - arg2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		if (compare_args(argv[i], argv[j]) > 0)
		{
			tmp = argv[j];
			argv[j] = argv[i];
			argv[i] = tmp;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		print_str(argv[i]);
		i++;
	}
	return (0);
}
