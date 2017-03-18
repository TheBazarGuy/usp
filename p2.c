#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#define BUFFER_SIZE 4096

int main()
{
	char buffer[BUFFER_SIZE];
	int n,fd;

	fd = open("./p2_out.txt",O_RDWR|O_CREAT|O_TRUNC,0777);

	while(n = read(STDIN_FILENO,buffer,BUFFER_SIZE))
		if(write(fd,buffer,n)!=n)
			fprintf(stderr, "Write Error!\n");

	close(fd);
}