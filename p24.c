#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main ()
{ 
  pid_t pid;

  pid = fork ();
  if (pid == 0)
  {
  	printf("Ending Child Process. State Transition from active to zombie\n");  	
    exit (0);
  }
  else 
  {
  	printf("Parent going to sleep\n");
  	sleep(1);
  }
  return 0;
}

// after you are done executing , run "ps aux | Z" on the terminal to show the process list 