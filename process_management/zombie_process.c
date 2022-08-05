#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t child_pid = fork();
	
	if(child_pid > 0)
	{
		printf("In Parent Process\n");
		//making parent process sleep for some time
		sleep(10);
	}
	else if(child_pid == 0)
	{
		printf("In Child Process \n");
		exit(0);
		
	}
	else if(child_pid < 0)
	{
		printf("Child Process creation failed\n");
	}

	return(0);
}
