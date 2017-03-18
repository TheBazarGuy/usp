#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int x = 0; // global variable
int main( int argc, char* *argv )
{
	pid_t pid;
	pid = fork();
	if(pid == 0)
	{
		x += 10;
		printf("Value of Global Variable is : %d\n",x);
	}
	else
	{
		x += 20;
		printf("Value of Global Variable is : %d\n",x);
	}

}