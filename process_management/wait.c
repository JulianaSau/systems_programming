#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	pid_t status = fork();
	
	if(status == 0)
	{
		printf("Hello from child \n");
		printf("Child's work is complete and terminating\n");
	
	}
	else if(status > 0)
	{
		printf("Hello from Parent Process\n");
		wait(NULL);
		printf("Parent has terminated\n");
	}
	else if(status < 0)
	{
		printf("Child Process creation failed\n");
	}

	return(0);
}
