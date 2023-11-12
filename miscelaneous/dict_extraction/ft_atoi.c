#include <stdio.h>


// Converts a string to a number (long).
int	ft_atoi(char *str)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (str[i] != '\0')
	{
		// In each iteration, extracts one number from the number string (str[i])
		// Then multiplies the number to return (x10) to create the tens, the hundreds, the thousands...
		// Finally it substracts '0' to convert str[i] to an integer.
		number = number * 10 + str[i] - '0';
		i++;
	}

	return (number);
}
/*
int	main(void)
{
	char	number_str[] = "54364";
	printf("%d", atoi(number_str));

	return (0);
}
*/
