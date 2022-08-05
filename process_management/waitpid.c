#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	pid_t pid = fork();
	int status;
	
	//terminates child process
	if(!pid)
	{
		printf("My PID: %d\n", getpid());
		exit(0);
	}
	
	waitpid(pid, &status, WUNTRACED);
	
	if(WIFEXITED(status))
	{
		printf("Exit normally\n");
		printf("Exit status: %d\n", WEXITSTATUS(status));
		exit(0);
	}
	else
	{
		printf("Exit NOT normal\n");
		exit(1);
	}
			

	return(0);
}
