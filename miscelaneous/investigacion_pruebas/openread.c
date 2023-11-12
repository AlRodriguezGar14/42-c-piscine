#include <stdio.h> 
#include <unistd.h> 
#include <fcntl.h>
#include <stdlib.h>

int main() 
{ 
	int filedescript, sz; 
	char *c;
	int	i = 0;
	
	c = (char*)malloc(1);

	// open the file only for reading
	filedescript = open("Notas.txt", O_RDONLY);

	// read the file and put 200 bytes in the buffer (in this case c)
	sz = read(filedescript, c, 299);
	
	// write the values in c
	while (c[i]  != '\0')
	{
		write(1, c + i, 1);
		i++;
	}
	free(c);
	close (filedescript);
	return (0);

}


