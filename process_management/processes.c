/**
 *Write a C program that prints the process ID, priorities and 
 *parent ID of all programs currently in the RAM
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	printf(“Process ID: %d\n”, getpid());
	printf(“Process ID: %d\n”, getppid());
	printf(“Process ID: %d\n”, getpriority(PRIO_PROCESS, getpid());

	return(0);	
}

