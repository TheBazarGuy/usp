#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#define BUFFER_SIZE 4096

int main()
{
	char buffer[BUFFER_SIZE];
	int n,fd;

	fd = open("./p3_in.txt",O_RDWR,0777);

	while(n = read(fd,buffer,BUFFER_SIZE))
		if(write(STDOUT_FILENO,buffer,n)!=n)
			fprintf(stderr, "Write Error!\n");


}