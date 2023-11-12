#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *zero_maker(int triad_q, int len)
{

	char *zero_str;
    int i;

    zero_str = (char*) malloc(len);
	
    i = 0; 
    zero_str[0] = '1';
    while (i < 3*(triad_q -1)) 
	{
		zero_str[i+1] = '0';
        i++;
	}

	return(zero_str);
}



int main(void)
{
	printf("%s", zero_maker(3, 9));
	return(0);
}
