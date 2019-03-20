#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cpid=0;
	cpid=fork();
	if(cpid==-1)
	{
		printf("Fork failed");
		exit(1);
	}
	if(cpid==0)
	{
		printf("I am Child, my PID is %ld \n",(long)getpid());
		printf("I am Child, my PPID is %ld \n",(long)getppid());
	}
	else
	{
		printf("I am Parent, my PID is %ld \n",(long)getpid());
		printf("I am Parent, my PPID is %ld \n",(long)getppid());
	}
	printf("i=%d",i);
	return 0;
}