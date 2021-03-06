#include <sys/types.h>
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
		printf("Running Child with PID = %ld \n",(long)getpid());
		while(1);
	}
	else
	{
		printf("Terminating Parent with PID = %ld \n",(long)getpid());
		exit(0);
	}
	return 0;
}