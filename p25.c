#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

	pid_t pid;
	pid = fork();

	if(pid!=0)
	{
		printf("Terminating Parent Process : %d\n",getpid());
		exit(0);
	}

	else
	{
		printf("Running Child (Orphan) Process : %d with Parent : %d\n",getpid(),getppid());
		sleep(1);
		printf("Running Child (Orphan) Process : %d with New Parent : %d\n",getpid(),getppid());
		exit(0);
	}
}