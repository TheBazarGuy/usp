#include <dirent.h> 
#include <stdio.h> 

int main(void)
{
  DIR *dp;
  struct dirent *dir;

  dp = opendir(".");
  if (dp) //directory pointer
  {
    while ((dir = readdir(dp)) != NULL)
    {
      printf("%s\n", dir->d_name);
    }

    closedir(dp);
  }

  return(0);
}