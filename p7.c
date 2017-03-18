#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFERSIZE 4096
int main()
{
	int fd,n,temp;
	char buffer[BUFFERSIZE];

	fd = open("./p7_in.txt",O_RDWR|O_CREAT|O_TRUNC,0777);
	fd = dup2(fd,STDOUT_FILENO);
	
	n = read(STDIN_FILENO,buffer,BUFFERSIZE);
	if(n<0)
	{
		fprintf(stderr,"Error Reading!\n");
		return 0;
	}

	printf("%s",buffer);
}