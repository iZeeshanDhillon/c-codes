#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int status;
	int cpid=fork();
	if(cpid==-1)
	{
		printf("Fork failed");
		exit(1);
	}
	if(cpid==0)
	{
		printf("I am Child\n");
		exit(0);
	}
	else
	{
		wait(&status);
		printf("I am Parent \n");
	}
	return 0;
}