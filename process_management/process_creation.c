#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t pid = fork();
	
	if(pid > 0)
	{
		printf("Parent Process is created\n");
	}
	else if(pid == 0)
	{
		printf("Child Process is created\n");
	}
	else if(pid < 0)
	{
		printf("Child Process is creation failed\n");
	}

	return(0);
}
