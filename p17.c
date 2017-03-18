#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	DIR *dp;
	int n,fd;
	struct dirent *dir;

	dp = opendir(".");
	if(dp)
	{
		while ((dir = readdir(dp)) != NULL)
		{
			// if(stat(dir->d_name,&file_stat)<0)
			// {
			// 	fprintf(stderr,"Error Creating stat\n");
			// 	return 1;
			// }
			fd = open(dir->d_name,O_RDWR,0777);
			n = lseek(fd,0,SEEK_END);
			if(!n)
				unlink(dir->d_name);
		}

	}
	closedir(dp);
}