#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#define BUFFER_SIZE 4096

int main()
{
	char buffer[BUFFER_SIZE];
	int n,fd_in,fd_out;

	fd_in = open("./p4_in.txt",O_RDWR,0777);
	fd_out = open("./p4_out.txt",O_RDWR|O_CREAT|O_TRUNC,0777);

	while(n = read(fd_in,buffer,BUFFER_SIZE))
		if(write(fd_out,buffer,n)!=n)
			fprintf(stderr, "Write Error!\n");

}