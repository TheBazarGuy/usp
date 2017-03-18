#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd,pos;

	fd = open("./p5_in.txt",O_RDWR,0777);

	pos = lseek(fd,0,SEEK_SET);
	printf("Position of Cursor Initially: %d\n",pos);

	pos = lseek(fd,10,SEEK_CUR);
	printf("Position of Cursor at offset 10 from current: %d\n",pos);

	pos = lseek(fd,0,SEEK_END);
	printf("Position of Cursor End : %d\n",pos);
}
