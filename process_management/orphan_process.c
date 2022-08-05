#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t child_pid = fork();
	
	if(child_pid > 0)
	{
		printf("In Parent Process\n");

	}
	else if(child_pid == 0)
	{
		printf("In Child Process \n");
		//making child process sleep for some time
		sleep(10);
		printf("After sleep time");	
	}
	else if(child_pid < 0)
	{
		printf("Child Process creation failed\n");
	}

	return(0);
}
