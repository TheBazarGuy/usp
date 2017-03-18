#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define BUFFER_SIZE 4096

int main()
{
    char buffer[BUFFER_SIZE];
    int n;

	while(n = read(STDIN_FILENO, buffer, BUFFER_SIZE))
	{
		if(write(STDOUT_FILENO,buffer,n)!=n)
			fprintf(stderr, "Write Failed!\n");
	}
   
   	if(n<0)
   		fprintf(stderr,"Read Failed!\n");

   	return 0;
}