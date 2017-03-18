#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd,fd_x ,fd_y;

	fd = open("./p6_in.txt",O_RDWR,0777);
	printf("File Descriptor of the File : %d\n",fd);

	printf("----- DUP -----\n");
	fd_x = dup(fd);
	printf("New File Descriptor : %d\n",fd_x);

	printf("----- DUP2 -----\n");
	printf("Enter a File Descriptor\n");
	scanf("%d",&fd_x);
	fd_y = dup2(fd,fd_x);
	printf("New File Descriptor : %d\n",fd_y);
}