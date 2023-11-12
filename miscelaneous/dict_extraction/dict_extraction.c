/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_extraction.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-mun <agil-mun@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:01:15 by agil-mun          #+#    #+#             */
/*   Updated: 2023/10/29 18:57:53 by agil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	final_writer()

char* buffer;
char** keys;
char** values;

typedef struct
{
	int		number;
	char	*name;
} NumberName;

NumberName dictionary[42];


int	alpha_check(char c);
int numeric_check(char c);
int	ft_atoi(char *str);


void	write_mssg(char	*str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	write(1, str, i);
}


int	open_read_file()
{
	int	fd;
	int sz;
	fd = open("numbers.dict", O_RDONLY);

	sz = read(fd, buffer, 200000);
	return(fd);
}

void	malloc_all()
{
	int	i;
	buffer = (char *)malloc(100000*sizeof(char));
	keys = (char **)malloc(100000*sizeof(char));
	values = (char **)malloc(100000*sizeof(char));
	
	i = 0;	
	while (i < 41)	
	{
		*(values + i) = (char *)malloc(100000*sizeof(char));
		*(keys + i) = (char *)malloc(100000*sizeof(char));
		i++;
	}
}


void	free_all()
{
	free(buffer);
	free(keys);
	free(values);
}

void	dict_extraction()
{	int	i,j;
	int	twop_count;
	int	row;
	int	k_column;
	int	v_column;
	
	twop_count = 0;
	row = 0;
	k_column = 0;
	v_column = 0;
	i = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == ':')
		{
			twop_count = 1;
		}
		else if (buffer[i] == '\n')
		{
			twop_count = 0;
			k_column = 0;
			v_column = 0;
			row++;
		}
		if (numeric_check(buffer[i]) && twop_count == 0)
		{
			keys[row][k_column] = buffer[i];
			k_column++;
		}
		if (alpha_check(buffer[i]) && twop_count == 1)
		{
			values[row][v_column] = buffer[i];
			v_column++;
		}	
		i++;
	}	
}

void	fill_dictionary(NumberName dictionary[])
{
	int	i;

	i = 0;
	while (i < 41)
	{
		dictionary[i].number = ft_atoi(keys[i]);
		if (ft_atoi(keys[i]) != 0)
			dictionary[i].name = values[i];
		else
			dictionary[i].name = "zero";
		i++;
	}

	//print_test(dictionary, 41);
}


char *find_name(int number, NumberName dictionary[]) {
    int dictionary_size = 41;
    int i = 0;
    while (i < dictionary_size) {
        if (dictionary[i].number == number) {
            return dictionary[i].name;
        }
        i++;
    }
    return NULL;  // Devuelve NULL si el número no se encuentra en el diccionario
}

int	write_hundreds(int number, NumberName dictionary[])
{
	int hundreds = number / 100;
	int remainder = number % 100;

	char *hundreds_name = find_name(hundreds, dictionary);
	char *hundred_name = find_name(100, dictionary);

	if (hundreds_name == NULL || hundred_name == NULL) {
		write_mssg("Dict error\n");
		return (1);
	}

	write_mssg(hundreds_name);
	write_mssg(" ");
	write_mssg(hundred_name);
	if (remainder != 0) {
		write_mssg(" and ");
		number = remainder;  // Procesar el resto del número
		return (number);
	} else {
		write_mssg("\n");
		return (1);
	}
}

void	write_tens(int number, NumberName dictionary[])
{
	int tens = number / 10 * 10;
	int ones = number % 10;

	char *tens_name = find_name(tens, dictionary);
	char *ones_name = find_name(ones, dictionary);

	write_mssg(tens_name);
	if (ones != 0) {
		write_mssg("-");
		write_mssg(ones_name);
	}
	write_mssg("\n");
}



void	triad_writer(int number, NumberName dictionary[])
{

    if (number >= 100) {
		number = write_hundreds(number, dictionary);
    }

    if (number > 20 && number < 100) 
	{
		write_tens(number, dictionary);
    }
	else
	{
        char *name = find_name(number, dictionary);

        write_mssg(name);
        write_mssg("\n");
    }
}

int	main(int argc, char *argv[])
{
	int fd;
	malloc_all();
	fd = open_read_file();
	close(fd);
	dict_extraction();
	free_all();

	fill_dictionary(dictionary);

    if (argc != 2) {
        write_mssg("Uso: ");
        write_mssg(argv[0]);
        write_mssg(" <numero>\n");
        return EXIT_FAILURE;
    }

    int number = atoi(argv[1]);
	if (number < 1000)
		triad_writer(number, dictionary);

	return(0);
}
