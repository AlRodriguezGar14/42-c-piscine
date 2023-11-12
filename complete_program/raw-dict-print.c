/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raw-dict-print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-mun <agil-mun@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:01:15 by agil-mun          #+#    #+#             */
/*   Updated: 2023/10/29 23:34:54 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	ft_strlen(char *str);
int	triad_quantity(int len);
int	triad_creator(int j, char *tri, char *str_number);


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

int	input_length(char *str)
{
	int	i;
	int	length;

	i = 0;
	length = 0;

	while (i < 40)
	{
		while (str[length] <= '9' && str[length] >= '0')
		{
			length++;
			i++;
		}
		i++;
	}
	return (length);
}

int	triad_to_nbr(char *str)
{
	int	output;
	int	index;
	int	operator;
	int operate;

	index = 0;
	output = 0;
	operator = 100;
	while (index < 3)
	{
		operate = str[index] - '0';
		output += operate * operator;
		index++;
		operator /= 10;
	}
	return (output);
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
		{
			dictionary[i].name = values[i];
		}
		else
		{
			dictionary[i].name = "zero";
		}
		i++;
	}

}

char *find_name(int number) {
   int dictionary_size = sizeof(dictionary) / sizeof(NumberName);
   int i = 0;
    while (i < dictionary_size) {
        if (dictionary[i].number == number) {
            return dictionary[i].name;
        }
        i++;
    }
    return NULL;  // Devuelve NULL si el número no se encuentra en el diccionario
}

void print_number(int  number) {
	if (number >= 1000000000) 
	{
		int billions = number / 1000000000;
		int remainder = number % 1000000000;

		print_number(billions);
		printf(" %s", find_name(1000000000));
		if (remainder != 0){
		printf(" ");
		print_number(remainder);
		}
	}

	else if(number >= 1000000) 
	{
        int millions = number / 1000000;
        int remainder = number % 1000000;

        print_number(millions);  // Llama a la función recursivamente para los millones
        printf(" %s", find_name(1000000));
        if (remainder != 0) {
            printf(" ");
            print_number(remainder);  // Procesa el resto del número
        }
    }
   
	else if (number >= 1000) 
	{
        int thousands = number / 1000;
        int remainder = number % 1000;

        print_number(thousands);  // Llama a la función recursivamente para los miles
        printf(" %s", find_name(1000));
        if (remainder != 0) {
            printf(" ");
            print_number(remainder);  // Procesa el resto del número
      }
    } 
	else if (number >= 100) 
	{
        int hundreds = number / 100;
        int remainder = number % 100;

        printf("%s %s", find_name(hundreds), find_name(100));
        if (remainder != 0) {
            printf(" and ");
            print_number(remainder);  // Procesa el resto del número
        }
    }
   	else if (number > 20 && number < 100) 
	{
        int tens = number / 10 * 10;
        int ones = number % 10;

        printf("%s", find_name(tens));
        if (ones != 0) {
            printf("-%s", find_name(ones));
        }
    } else {
        printf("%s", find_name(number));
    }
}

void	display_error()// just show error and new line
{
	write(1, "Error\n", 6);	
}

int count_characters(char *str)// counts the number of characters
{
	int num_characters;

	num_characters = 0;
	while (*str != '\0')// initiates with the first position of the str
	{
		num_characters++; //adds 1 
		str++;// goes to the next position of the character
	}
	return (num_characters);
}

int	is_numeric( char *str)// checks if the str contains just numbers
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			return (1); // not valid string, 1 = true
		}
		str++;
	}
	return (0);// 0 str is OK
}

int	main(int argc, char *argv[])
{
	int fd;
	int	len;
	int	j;
	int	number;
	char *input_string;
	malloc_all();
	fd = open_read_file();
	close(fd);
	dict_extraction();
	free_all();

	fill_dictionary(dictionary);



	if ((argc == 2) || (argc == 3))
	{ 
		input_string = argv[argc - 1];
	}
	else
	{
		display_error();
		return (1);// exits the main
	}
	
	if ((count_characters(input_string) == 0) ||
		(count_characters(input_string) >= 40) || (is_numeric(input_string)))
	{
		display_error();
		return (1);// exits the main
	}

    number = ft_atoi(input_string);
    
    print_number(number);


	return(0);
}
