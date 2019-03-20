#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cpid=fork();
	if(cpid==-1)
	{
		printf("Fork failed");
		exit(1);
	}
	if(cpid==0)
	{
		printf("I am Child\n");
	}
	else
	{
		wait(NULL);
		printf("I am Parent \n");
	}
	return 0;
}